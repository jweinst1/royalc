#ifndef ROYAL_C_HEADER
#define ROYAL_C_HEADER

/**
 * This is the main, single header for the royalc parser.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

#define ROYALC_DEFAULT_NODE_CAPACITY 5

typedef enum __royalc_type {
	ROYALC_TYPE_PROGRAM
} royalc_t;

typedef struct __royalc_node {
	royalc_t type;
	size_t child_len;
	size_t child_cap;
	struct __royalc_node** child_nodes;
	char* data;
} royalc_node_t;

static void* royalc_malloc(size_t size)
{
	void* memd = malloc(size);
	if(memd == NULL) {
		fprintf(stderr, "Memory Error: malloc for size %lu returned NULL.\n", size);
		exit(1);
	} else return memd;
}

royalc_node_t* royalc_node_new(const char* data, size_t data_size)
{
	royalc_node_t* node = royalc_malloc(sizeof(royalc_node_t));
	node->child_cap = ROYALC_DEFAULT_NODE_CAPACITY;
	node->child_len = 0;
	node->child_nodes = royalc_malloc(sizeof(royalc_node_t*) * ROYALC_DEFAULT_NODE_CAPACITY);
	node->data = royalc_malloc(sizeof(char) * data_size + 1);
	strncpy(node->data, data, data_size);
	node->data[data_size] = '\0';
	return node;
}

void royalc_node_del(royalc_node_t* node)
{
	unsigned i;
	for(i = 0 ; i < node->child_len; i++) {
		royalc_node_del(node->child_nodes[i]);
	}
	free(node->child_nodes);
	free(node->data);
	free(node);
}

#ifdef __cplusplus
}
#endif

#endif // ROYAL_C_HEADER

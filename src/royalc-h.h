#ifndef ROYAL_C_HEADER
#define ROYAL_C_HEADER

/**
 * This is the main, single header for the royalc parser.
 */

#ifdef __cplusplus
extern "C" {
#endif

typedef enum __royalc_type {
	ROYALC_TYPE_PROGRAM
} royalc_t;

typedef struct __royalc_node {
	royalc_t type;
} royalc_node_t;

#ifdef __cplusplus
}
#endif

#endif // ROYAL_C_HEADER

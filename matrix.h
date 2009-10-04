#ifndef __matrix_h_
#define __matrix_h_

/* private */
typedef struct {
    int sizex, sizey;
    int *array;                 /* x varies first, then y */
} matrix_t;

void matrix_init(matrix_t *, int sizex, int sizey);
void matrix_fini(matrix_t *);

/* WARNING: evaluates matrix multiple times */
#define matrix_at(matrix, x, y)  ((matrix)->array[((matrix)->sizex * (y) + x)])

#endif

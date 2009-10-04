#ifndef __matrixview_h_
#define __matrixview_h_

#include "matrix.h"

typedef struct {
    matrix_t *matrix;
    int x, y;
    int w, h;
} matrixview_t;

void matrixview_init(matrixview_t *, matrix_t *, int x, int y, int w, int h);
void matrixview_fini(matrixview_t *);

/* WARNING: evaluates matrixview multiple times */
/* Does no bounds checking */
#define matrixview_at(matrixview, x, y)  matrix_at((matrixview)->matrix, (x) + (matrixview)->x, (y) + (matrixview)->y)

#endif

#include "matrixview.h"

#include <stddef.h>

void matrixview_init(matrixview_t *matrixview, matrix_t *matrix, int x, int y, int w, int h)
{
    matrixview->matrix = matrix;
    matrixview->x = x;
    matrixview->y = y;
    matrixview->w = w;
    matrixview->h = h;
}

void matrixview_fini(matrixview_t *matrixview)
{
    matrixview->matrix = NULL;
}

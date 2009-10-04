#include "matrix.h"
#include <stdlib.h>

void matrix_init(matrix_t *matrix, int sizex, int sizey)
{
    matrix->sizex = sizex;
    matrix->sizey = sizey;
    matrix->array = malloc(sizeof *matrix->array * sizex*sizey);
}

void matrix_fini(matrix_t *matrix)
{
    free(matrix->array);
    matrix->array = NULL;
}

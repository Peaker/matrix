#include "matrix.h"
#include "matrixview.h"

#include <stdio.h>

int main() {
    int sizex = 3, sizey = 5;
    matrix_t matrix;
    matrix_init(&matrix, sizex, sizey);
    int x, y;
    for(x = 0; x < sizex; x++) {
        for(y = 0; y < sizey; y++) {
            matrix_at(&matrix, x, y) = x+y;
        }
    }
    matrixview_t matrixview;
    matrixview_init(&matrixview, &matrix, 1, 1, 2, 2);
    for(x = 0; x < 2; x++) {
        for(y = 0; y < 2; y++) {
            printf("matrixview_at(%d,%d) = %d\n", x, y, matrixview_at(&matrixview, x, y));
        }
    }
    matrixview_fini(&matrixview);
    matrix_fini(&matrix);
    return 0;
}

#include<stdio.h>

int main() {
    int rows = 3;
    int cols = 5;
    int matrix[3][5] = {0};

    // filling the diagonals
    for (int k = 0; k < rows && k < cols; k++) {
        matrix[k][k] = k + 1;
    }

    // printing the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

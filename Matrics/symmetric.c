#include <stdio.h>
// Function to check if the matrix is symmetric
int n=5;
int Symmetric(int matrix[n][n]) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0;
            }
        }
    }
    return 1; 
}

int main() {
    int matrix[n][n];

    printf("Enter elements of the %dx%d matrix:\n",n,n);
    for (int i = 0; i <n; i++) {
        for (int j = 0; j <n; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric
    if (Symmetric(matrix)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}

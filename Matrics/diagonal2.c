#include<stdio.h>
int main(){
    int n=3;
    int matrix[3][3]={0};
    // fill the diagonal
    for(int i=0;i<n;i++){
        matrix[i][i]=i+1;
    }
    // print the matrix
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
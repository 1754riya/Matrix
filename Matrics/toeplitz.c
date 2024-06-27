#include<stdio.h>
void toeplitz(int A[][4], int rows,int cols){
    for(int i=0; i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d",A[i][j]);}
            printf("\n");
}

}
int main(){
    int rows=3;
    int cols=4;
    int A[rows][cols];
    for(int i=0; i<rows;i++){
        for(int j=0;j<cols;j++){
            A[i][j]=rows-i+j-1;
}
}
printf("toeplitz Matrix:\n");
    toeplitz(A, rows, cols);
}
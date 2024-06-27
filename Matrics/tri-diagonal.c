#include<stdio.h>
int n=4;
void tridiagonal(int A[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                A[i][j]=i+1;}
                else if(i==j+1||i==j-1){
                    A[i][j]=-1;
                }
                else{
                    A[i][j]=0;
                }

            }
        }
    };
    int main(){
        int A[n][n];
        tridiagonal(A);
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",A[i][j]);
    
}printf("\n");
}
return 0;
}

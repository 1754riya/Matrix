#include<stdio.h>
// COLUM MAJOR
int main(){
    int n=4;
    int matrix[n][n];
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            if(j<=i){
            matrix[i][j]=(n*(j-1)-(j-2)*(j-1)/2)+i-j;
        }
        else{
            matrix[i][j]=0;
        }
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",matrix[i][j]);
}
printf("\n");
}
return 0;
}
//program for add two matrix
#include<stdio.h>
void main(){
    int A[3][3], B[3][3], C[3][3],i,j;
     printf("enter 9 no. for first mateix");
     for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&A[i][j]);
        }
     }

     printf("enter 9 no. for second mateix");
     for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&B[i][j]);
        }
     }

     printf("sum of matrix is\n");
     for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            C[i][j]=A[i][j]+B[i][j];
            printf("%d\t",C[i][j]);
        }
        printf("\n");
     }
}

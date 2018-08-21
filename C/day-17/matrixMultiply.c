//program for multiply two matrix
#include<stdio.h>
void main(){
    int A[3][3], B[3][3], C[3][3],i,j,k,sum;
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

     for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            sum=0;
            for(k=0;k<=2;k++){
                sum=sum+A[i][k]*B[k][j];
            }
            C[i][j]=sum;
        }

    }

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}

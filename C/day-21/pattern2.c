/*
_____________________________
*****
 ****
  ***
   **
    *
____________________________
*/

#include<stdio.h>
void main()
{
    int i,j,n;
    printf("how many number of raw do you want for print * \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");

    }
}

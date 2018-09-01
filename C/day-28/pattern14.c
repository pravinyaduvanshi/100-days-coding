/*
_____________________________
    1
   12
  123
 1234
12345
 1234
  123
   12
    1
____________________________
*/

#include<stdio.h>
void main()
{
    int i,j,k=0,x;
    for(i=1;i<=9;i++)
    {
        i<6?k++:k--;
        x=1;
        for(j=1;j<=5;j++)
        {
            if(j>=6-k){
                printf("%d",x);
                x++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");

    }
}

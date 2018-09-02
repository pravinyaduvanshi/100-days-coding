/*
_____________________________

   A1
  AB12
 ABC123
ABCD1234
_________________________
*/

#include<stdio.h>
void main()
{
    int i,j,x;
    char y;
    for(i=1;i<=4;i++)
    {
        x=1;
        y='A';
        for(j=1;j<=8;j++)
        {
            if(j>=5-i&&j<=4+i)
            {
                if(j<=4){
                    printf("%c",y);
                    y++;
                }
                else if(j>4){
                    printf("%d",x);
                    x++;
                }
            }
            else
                printf(" ");

        }
        printf("\n");

    }
}



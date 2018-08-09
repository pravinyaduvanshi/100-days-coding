#include<stdio.h>
#include<math.h>

void main()
{
        int p,t;
        float r,si,amount,ci;
        printf("Please enter principal\n");
        scanf("%d",&p);
        printf("enter time in month\n");
        scanf("%d",&t);
        printf("enter rate of interest\n");
        scanf("%f",&r);

        si=p*t*r/100;
        printf("\nSimple interest = %.3f",si);

        amount=p*pow((1 +r/100),t);
        ci=amount-p;
        printf("\nCompound interest = %.3f",ci);
        getch();
}

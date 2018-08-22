//program to calculate x power y
#include<stdio.h>
void main(){

    int x,y,p=1,i;

    printf("enter a no. and its power");
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++){
        p=p*x;
    }
    printf("Result is %d",p);
}

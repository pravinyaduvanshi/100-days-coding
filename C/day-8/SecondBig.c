#include<stdio.h>
void main()
{
    int a[20],n,i,fbig,sbig,temp;
    printf("enter array limits\n");
    scanf("%d",&n);
    printf("enter array elements\n");

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    fbig=a[0];
    sbig=a[1];

    if(sbig>fbig){
        temp=sbig;
        sbig=fbig;
        fbig=temp;
    }
    for(i=2;i<n;i++){
        if(a[i]>fbig){
            sbig=fbig;
            fbig=a[i];
        }
        else if(a[i]>sbig){
            sbig=a[i];
        }
    }
    printf("first big = %d \n second big = %d",fbig,sbig);
    getch();
}

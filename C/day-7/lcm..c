#include <stdio.h>
void main()
{
    int n1, n2, max_Value;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    max_Value = (n1>n2) ? n1 : n2;
    while(1)
    {
        if( max_Value%n1==0 && max_Value%n2==0 )
        {
            printf("The LCM of %d and %d is %d.", n1, n2,max_Value);
            break;
        }
        ++max_Value;
    }
    getch();
}

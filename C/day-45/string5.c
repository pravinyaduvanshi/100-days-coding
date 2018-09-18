// C program to print reverse of words in a string.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("enter a string");
    gets(str);
    int length = strlen(str);
    int i;
    for (i = length - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            str[i] = '\0';
            printf("%s ", &(str[i]) + 1);
        }
    }
    printf("%s", str);

    return 0;
}

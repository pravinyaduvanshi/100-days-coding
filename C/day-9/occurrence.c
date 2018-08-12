#include <stdio.h>
#include <string.h>
void main()
{
    printf("PLEASE ENTER A STRING\n");
    printf("GIVE ONLY ONE SPACE BETWEEN WORDS\n");
    printf("PRESS ENETR WHEN FINISHED\n");

    char str[100];
    int arr[26]={0};
    char ch;
    int i;

    gets(str);
    int n=strlen(str);

    for(i=0;i<n;i++)
    {
        ch=tolower(str[i]);
        if(ch>=97 && ch<=122)
        {
            arr[ch-97]++;
        }
    }
    for(i=97;i<=122;i++)
        printf("%c OCCURS %d NUMBER OF TIMES\n",i,arr[i-97]);
    getch();
}

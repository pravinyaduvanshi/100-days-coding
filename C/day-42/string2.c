//Program to count vowels, consonants, digits, spaces in a string

#include <stdio.h>

int main()
{
    char arr[200];
    int i, vowels=0 , consonants=0 , digits=0 , spaces=0;

    printf("Enter a string: ");
    scanf("%[^\n]", arr);

    for(i=0; arr[i]!='\0'; ++i)
    {
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' ||
           arr[i]=='o' || arr[i]=='u' || arr[i]=='A' ||
           arr[i]=='E' || arr[i]=='I' || arr[i]=='O' ||
           arr[i]=='U')
        {
            ++vowels;
        }
        else if((arr[i]>='a'&& arr[i]<='z') || (arr[i]>='A'&& arr[i]<='Z'))
        {
            ++consonants;
        }
        else if(arr[i]>='0' && arr[i]<='9')
        {
            ++digits;
        }
        else if (arr[i]==' ')
        {
            ++spaces;
        }
    }

    printf("Vowels: %d",vowels);
    printf("\nConsonants: %d",consonants);
    printf("\nDigits: %d",digits);
    printf("\nWhite spaces: %d", spaces);

    return 0;
}

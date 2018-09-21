// Program to remove given word from a string

#include <stdio.h>
#include <string.h>

void main()
{
    int i,j=0,k=0,count=0;
    char s[100],s2[10][20],key[20];

    printf("enter string:");
    scanf("%[^\n]s",s);

    for (i=0;s[i]!='\0';i++)
    {
        if (s[i]==' ')
        {
            s2[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            s2[k][j] = s[i];
            j++;
        }
    }
    s2[k][j] = '\0';
    printf("enter key:");
    scanf("%s", key);

    for (i=0;i<=k;i++)
    {
        if (strcmp(s2[i], key) == 0)
        {
            for (j=i;j<=k;j++)
            {
                strcpy(s2[j], s2[j + 1]);
            }

        }

    }
    printf("after delete key value\n");
    for (i=0;i<=k;i++)
    {
        printf("%s ", s2[i]);
    }
}

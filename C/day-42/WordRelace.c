// program for replae an word from string

#include <stdio.h>

void main()
{
    int i,j=0,k=0,l;
    char s[100],s2[10][20],key[20],key2[20];

    printf("enter string: \n");
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
    printf("enter key which you remove \n");
    scanf("%s", key);
    printf("enter key which you want to insert \n");
    scanf("%s", key2);

     l=k;

    for (i=0; i<=l; i++)
    {
      if(strcmp(s2[i],key)==0)
        strcpy(s2[i],key2);

    }

    for (i=0;i<=k;i++)
    {
        printf("%s ", s2[i]);
    }
}

// Program to count length of each word in a string

#include <stdio.h>
#define MAX_WORDS	10

int main()
{
	char text[100];
	int cnt[MAX_WORDS]={0};
	int len=0,i=0,j=0;

	printf("Enter a string: ");
	scanf("%[^\n]s",text);

	while(1)
	{
		if(text[i]==' ' || text[i]=='\0')
		{

			if(text[i]=='\0')
			{
				if(len>0)
				{
					cnt[j++]=len;
					len=0;
				}
				break;
			}
			cnt[j++]=len;
			len=0;
		}
		else
		{
			len++;
		}
		i++;
	}

	printf("Words length:\n");
	for(i=0;i<j;i++)
	{
		printf("%d, ",cnt[i]);
	}
	printf("\b\b \n");

	return 0;
}

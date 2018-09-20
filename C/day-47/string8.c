// C program for Naive Pattern Searching algorithm
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "AABAACAADAABAAABAA";
    char key[] = "AABA";

    int M = strlen(key);
    int N = strlen(str);
    int j;
    for (int i = 0; i <= N - M; i++)
    {
        for (j = 0; j < M; j++)
            if (str[i + j] != key[j])
                break;

        if (j == M)
            printf("Pattern found at index %d \n", i);
    }
    return 0;
}

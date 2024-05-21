#include <stdio.h>

int main()
{
    char s;
    int count[26] = {0};
    while (scanf("%c", &s) != EOF)
    {
        count[s - 'a']++;
    }
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (count[i - 'a'] != 0)
        {
            printf("%c - %d\n", i, count[i - 'a']);
        }
    }

    return 0;
}
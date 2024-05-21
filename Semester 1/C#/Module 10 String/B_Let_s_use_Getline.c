#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];
    fgets(s, 2000001, stdin);
    int i = 0;
    while (s[i] != '\\')
    {
        printf("%c", s[i]);
        i++;
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int len = strlen(s) - 1;
    int i = 0;
    int x = 0;
    while (i < len)
    {
        if (s[i] != s[len])
        {
            x = 1;
        }
        else
        {
            x = 0;
        }
        i++;
        len--;
    }
    if (x == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    char sc[100];
    for (int i = 0; i <= strlen(s); i++)
    {
        sc[i] = s[i];
    }
    printf("%s", sc);
    return 0;
}
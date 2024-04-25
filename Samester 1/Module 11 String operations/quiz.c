#include <stdio.h>
#include <string.h>

int main()
{
    char s[10], s1[10];
    scanf("%s %s", s, s1);
    int v = strcmp(s, s1);
    printf("%d", v);
    return 0;
}
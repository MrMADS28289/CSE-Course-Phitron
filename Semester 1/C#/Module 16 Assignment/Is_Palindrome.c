#include <stdio.h>
#include <string.h>

int is_palindrome(char s[1001])
{
    int isP = 1;
    int len = strlen(s);
    int jlen = len - 1;
    for (int i = 0; i < len; i++)
    {
        if (s[i] != s[jlen])
        {
            isP = 0;
            break;
        }
        jlen--;
    }
    return isP;
}

int main()
{
    char s[1001];
    scanf("%s", s);
    int isP = is_palindrome(s);

    if (isP == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}
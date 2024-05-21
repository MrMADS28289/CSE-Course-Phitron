#include <stdio.h>
#include <string.h>

int count_vowels(char s[], int i)
{
    if (i == strlen(s))
        return 0;

    int vowels = count_vowels(s, i + 1);

    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] = s[i] + 32;
    }
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        return vowels + 1;
    }

    return vowels;
}

int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int v = count_vowels(s, 0);
    printf("%d", v);

    return 0;
}
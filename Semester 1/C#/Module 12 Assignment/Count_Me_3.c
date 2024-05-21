#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int al = 0, sm = 0, dz = 0;
    char s[10001];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                sm++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                al++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                dz++;
            }
        }
        printf("%d %d %d\n", al, sm, dz);
        al = 0;
        sm = 0;
        dz = 0;
    }
    return 0;
}
#include <stdio.h>

int main()
{
    char alpha;
    scanf("%c", &alpha);
    if (alpha == 122)
    {
        alpha = 97;
    }
    else
    {
        alpha += 1;
    }
    printf("%c", alpha);

    return 0;
}
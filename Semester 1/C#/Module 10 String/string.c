#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    for (int i = 0; i < 20; i++)
    {
        scanf("%c", &a[i]);
    }

    for (int i = 0; i < 19; i++)
    {
        printf("%c", a[i]);
    }
    int so = sizeof(a) / sizeof(int);
    printf("\n%d\n%d", sizeof(a), so);

    return 0;
}
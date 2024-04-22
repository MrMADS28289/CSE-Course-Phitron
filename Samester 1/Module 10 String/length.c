#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    scanf("%s", a);
    int length = strlen(a);
    // for (int i = 0; a[i] != NULL; i++)
    // {
    //     length++;
    // }
    // int i = 0;
    // while (a[i] != '\0')
    // {
    //     length++;
    //     i++;
    //     /* code */
    // }

    printf("%d", length);
    return 0;
}
#include <stdio.h>

int main()
{
    // \0 == NUL
    char a[] = "Masum Abduss Sobhan";
    // printf("%s", a);
    char b[20];
    // gets(b);
    fgets(b, 20, stdin);
    printf("%s", b);
    return 0;
}
#include <stdio.h>

void lovePrint(int n, int i)
{
    if (i == n + 1)
        return;
    printf("I love Recursion\n");
    i++;
    lovePrint(n, i);
}

int main()
{
    int n;
    scanf("%d", &n);
    lovePrint(n, 1);
    return 0;
}
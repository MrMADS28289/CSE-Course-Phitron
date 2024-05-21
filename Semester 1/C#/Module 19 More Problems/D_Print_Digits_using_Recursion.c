#include <stdio.h>

void print_digits(int digits)
{

    if (digits == 0)
        return;
    int x = digits % 10;
    print_digits(digits / 10);
    printf("%d ", x);
}

int main()
{
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0");
        }
        else
        {
            print_digits(n);
        }
        printf("\n");
    }
    return 0;
}
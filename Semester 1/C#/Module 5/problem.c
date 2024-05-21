// Problem 1

// #include <stdio.h>

// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if (a >= b)
//     {
//         printf("Yes\n");
//     }
//     else
//     {
//         printf("No\n");
//     }

//     return 0;
// }

// Problem 2

// #include <stdio.h>

// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     if (a % b == 0 || b % a == 0)
//     {
//         printf("Multiples\n");
//     }
//     else
//     {
//         printf("No Multiples\n");
//     }

//     return 0;
// }

// Problem 3

// #include <stdio.h>

// int main()
// {

//     char x;
//     scanf("%c", &x);

//     if (x >= 'a' && x <= 'z')
//     {
//         int charrecter = x - 32;
//         printf("%c\n", charrecter);
//     }
//     else
//     {
//         int charrecter = x + 32;
//         printf("%c\n", charrecter);
//     }

//     return 0;
// }

// Problem 4

// #include <stdio.h>

// int main()
// {
//     int x;
//     scanf("%d", &x);
//     int num = x / 1000;
//     if (num % 2 == 0)
//     {
//         printf("EVEN");
//     }
//     else
//     {
//         printf("ODD");
//     }

//     return 0;
// }

// Problem 5

// #include <stdio.h>

// int main()
// {
//     char x;
//     scanf("%c", &x);
//     if (x >= '0' && x <= '9')
//     {
//         printf("IS DIGIT\n");
//     }
//     else
//     {
//         printf("ALPHA\n");
//         if (x >= 'a' && x <= 'z')
//         {
//             printf("IS SMALL");
//         }
//         else
//         {
//             printf("IS CAPITAL");
//         }
//     }

//     return 0;
// }

// Problem 6

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // get minimum
    if (a <= b && a <= c)
    {
        printf("%d ", a);
    }
    else if (b <= a && b <= c)
    {
        printf("%d ", b);
    }
    else
    {
        printf("%d ", c);
    }

    // get maximum

    if (a >= b && a >= c)
    {
        printf("%d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }

    return 0;
}
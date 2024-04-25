#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char nums[n];
    scanf("%s", nums);
    int sum = 0;
    for (int i = 0; i < strlen(nums); i++)
    {
        int num = nums[i] - '0';
        sum = sum + num;
    }
    printf("%d\n", sum);
    return 0;
}
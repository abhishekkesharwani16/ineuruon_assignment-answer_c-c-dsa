#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    if (num % 3 == 0)
    {
        printf("number is divisible by 3 \n");
        if (num % 2 == 0)
            printf(" And number is divisible by 2 \n");
        else
            printf("And number is not divisible by 2 \n");
    }
    else
        printf("number is not divisible by 3\n");
    {
        if (num % 2 == 0)
            printf("And number is divisible by 2\n");
        else
            printf("And number is not divisible by 2\n");
    }
    return 0;
}
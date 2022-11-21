#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    if (num % 7 == 0)
    {
        printf("number is divisible by 7 \n");
        if (num % 3 == 0)
            printf("number is divisible by 3 \n");
        
    }
    else
    {
        if (num % 3 == 0)
            printf("only number is divisible by 3 not 7\n");
        
    }
    return 0;
}
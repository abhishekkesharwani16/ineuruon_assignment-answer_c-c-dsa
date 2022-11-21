#include<stdio.h>

int main()
{

    int num;
    printf("Enter a number-");
    scanf("%d",&num);
    if(num &1 == 1)
    printf("number is odd\n");
    else
    printf("number is even\n");

    return 0;
}

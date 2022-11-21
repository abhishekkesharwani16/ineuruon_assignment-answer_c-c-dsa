#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number-");
    scanf("%d",&num);
    if(num%10==0 || num%10==5)
    printf("%d is divisible by 5 ",num);
    else
    printf("%d is not divisible by 5",num);
    return 0;
}
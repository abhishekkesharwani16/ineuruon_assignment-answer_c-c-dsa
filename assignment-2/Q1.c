#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("unit digit of a given no is %d",num%10);
    return 0;
}
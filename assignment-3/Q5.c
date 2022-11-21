#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number-");
    scanf("%d",&num);
    if(num>99 || num<1000)
    printf("%d is a three digit number",num);
    else
    printf("%d is not a three digit number",num);
    return 0;
}
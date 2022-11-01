#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number-");
    scanf("%d",&a);
    printf("Enter a one digit-");
    scanf("%d",&b);
    a=a*10;
    a=a+b;
    printf("%d",a);
    return 0;
}
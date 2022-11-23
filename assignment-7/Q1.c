// 1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,n,i;
    printf("Enter a number-\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("The %dth fibonacci number is %d\n",n,b);
    return 0;
}
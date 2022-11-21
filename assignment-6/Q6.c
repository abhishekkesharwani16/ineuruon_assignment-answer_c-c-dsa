// 6. Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter any number to find out factorial-\n");
    scanf("%d",&n);
    for(i=n;i>1;i--)
    {
        fact=fact*i;
    }
    printf("Factorial of %d = %d\n",n,fact);
    return 0;
}
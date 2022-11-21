//  Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
    int i,n,f=0;
    printf("Enter a number to check prime or not-\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
        f=1;
        break;
        }
    }
    if(f==0)
    printf("Number is prime\n");
    else
    printf("Not prime\n");
    return 0;
}
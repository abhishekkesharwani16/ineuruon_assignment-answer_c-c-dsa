// 9. Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
int main()
{
    int i,n,x,count=0,sum=0;
    printf("Enter a number to check whether a number is Armstrong number or not-\n");
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
        x=x/10;
        count++;
    }
       x=n;
    while(x!=0)
    {
        sum=sum+pow(x%10,count);
        x=x/10;
    }
    if(n==sum)
    printf("%d is an Armstrong number\n",n);
    else
    printf("%d is not an Armstrong number\n",n);
    
    return 0;
}
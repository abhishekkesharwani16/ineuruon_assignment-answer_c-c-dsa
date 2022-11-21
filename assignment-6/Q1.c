// 1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter number wheather to calculate the sum of natural number-\n");
    scanf("%d",&n);
    printf("sum of %d natural number is---------->\n",n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        
        sum=sum+i;
    }
        printf("%d\n",sum);
    return 0;

}
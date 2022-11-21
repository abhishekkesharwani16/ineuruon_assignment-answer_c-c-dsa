// 2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter whether to calculate the sum of even natural number-\n");
    scanf("%d",&n);
    printf("sum of first %d evevn natural number--------->\n",n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        sum=sum+i;
    }
        printf("%d\n",sum);
    return 0;
}
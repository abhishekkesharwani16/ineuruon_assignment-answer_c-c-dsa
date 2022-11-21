// 4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter number to calculate the square of natural number-\n");
    scanf("%d",&n);
    printf("sum of square of first %d natural number--------->\n",n);
    sum=0;
    for(i=0;i<=n;i++)
    {
       
        sum=sum+i*i;
    }
    printf("%d\n",sum);
    return 0;
}
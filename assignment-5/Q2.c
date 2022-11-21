// Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Limit to print natural number-\n");
    scanf("%d",&n);
    printf("Natural number is----->\n");
    while(i<=n)
    {
    printf("%d\n",i);
    i++;
    }
    return 0;
}
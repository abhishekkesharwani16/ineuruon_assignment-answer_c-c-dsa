// Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i=20,n;
    printf("Enter how many even natural number to print in reverse order-\n");
    scanf("%d",&n);
    printf("first N even natural numbers in reverse order is----------->\n");
    i=2*n;
    while(i>0)
    {
        if(i%2==0)
        printf("%d\n",i);
        i--;
    }
    return 0;
}
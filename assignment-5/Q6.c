// Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter number to print even natural number-\n");
    scanf("%d",&n);
    printf("first N even natural numbers is------->\n");
    while(i<=2*n)
    {
        if(i%2==0)
        printf("%d\n",i);
        i++;
    }
    return 0;
}
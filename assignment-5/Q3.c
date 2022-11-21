// Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i;
    printf("Enter limit to print natural number in reverse order-\n");
    scanf("%d",&i);
    printf("first N natutal number in reverse order------->\n");
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}
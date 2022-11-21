// Write a program to print the first 10 even natural numbers
#include<stdio.h>
int main()
{
    int i=1;
    printf("first 10 even natural numbers is-\n");
    while(i<=20)
    {
        if(i%2==0)
        printf("%d\n",i);
        i++;
    }
    return 0;
}
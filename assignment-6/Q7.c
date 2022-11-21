// 7. Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter any number to count digits-\n");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
       count++;

    }
    printf("Digits in given number is-%d",count);
    return 0;
}
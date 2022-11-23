// 2. Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int count,fib1=0,fib2=1,fib3=0,num;
    printf("Enter the value of num-\n");
    scanf("%d",&num);
    printf("First %d FIBONACCI number are ---->\n",num);
    printf("%d\n",fib1);
    printf("%d\n",fib2);
    count=2;
    while(count<num)
    {
        fib3=fib1+fib2;
        count++;
        printf("%d\n",fib3);
        fib1=fib2;
        fib2=fib3;
    }
    return 0;
}
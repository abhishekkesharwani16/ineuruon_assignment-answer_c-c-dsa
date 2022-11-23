// 3. Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
int main()
{
    int count,fib1=0,fib2=1,fib3=0,num,flag=0;
    printf("Enter the value of num-\n");
    scanf("%d",&num);
   
    count=2;
    while(count<num)
    {
        fib3=fib1+fib2;
        count++;
         if(num==fib3)
         flag=1;
        fib1=fib2;
        fib2=fib3;
    }
    if(flag==1)
    printf("yes present it is present in FIBONACCI series\n");
    else
    printf("No it is not present in FIBONACCI series\n");

    return 0;
}
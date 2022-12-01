// 6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>

 int factorial(int n)
 {
    for ( int i = n-1; i >= 1; i--)
    {
        /* code */
    n= n*i;
    }
    return n;
    
 }

 int main()
 {
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("%d ",factorial(n));


    return 0;
 }
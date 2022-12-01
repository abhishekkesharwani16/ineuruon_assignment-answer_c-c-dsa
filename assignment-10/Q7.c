//7. Write a function to calculate the number of combinations one can make from n items
//and r selected at a time. (TSRS)
#include<stdio.h>

int factorial(int n)

 {
   
    for ( int i = n-1; i >= 1; i--)
    {
       
    n= n*i;
    }
    return n;
    
 }

 int combination(int n, int r)
 {
    return (factorial(n)/(factorial(r)*factorial(n-r)));
 }

 int main()
 {
    printf("combination = %d \n",combination(10,2));
    return 0;
 }
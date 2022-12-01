//8. Write a function to calculate the number of arrangements one can make from n items
// and r selected at a time. (TSRS)

#include<stdio.h>

int factorial(int n)

 {
   
    for ( int i = n-1; i >= 1; i--)
    {
       
    n= n*i;
    }
    return n;
    
 }

 int permutation(int n, int r)
 {
    return (factorial(n)/(factorial(n-r)));
 }

 int main()
 {
    printf("permutation = %d \n",permutation(10,2));
    return 0;
 }
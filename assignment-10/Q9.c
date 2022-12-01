// 9. Write a function to check whether a given number contains a given digit or not.
// (TSRS)

#include<stdio.h>
 int check(int digit,int n)
 {
    while (n)
    {
       if(n%10==digit)
       return 1;
       n=n/10;

    }
    return 0;

    
 }

 int main()
 {
    int digit,n;
    printf("Emter a digit and number\n");
    scanf("%d %d",&digit,&n);
   if(check(digit,n))
   printf("yes \n");
   else
   printf("no\n");
   return 0;
 }
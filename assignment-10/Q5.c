// 5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>

 void oddNatural(int n)
 {
    int i;
    for(i=1;i<=2*n;i=i+2)
    printf("%d ",i);


 }

 int main()
 {
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    oddNatural(n);
    return 0;
 }
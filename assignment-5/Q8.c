// Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter how many numbers to square print on the screen-\n");
    scanf("%d",&n);
    printf("squares of the first N natural numbers is-\n");
    while(i<=n){
        printf("%d * %d = %d\n",i,i,i*i);
        i++;
    }
}
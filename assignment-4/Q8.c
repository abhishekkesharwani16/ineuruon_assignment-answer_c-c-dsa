// Write a program to print squares of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int i=1;
    printf("squares of the first 10 natural numbers is-\n");
    while(i<=10){
        printf("%d * %d = %d\n",i,i,i*i);
        i++;
    }
}
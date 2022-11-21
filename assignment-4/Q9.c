// Write a program to print cubes of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int i=1;
    printf("Qube of first 10 natural number is-\n");
    while(i<=10)
    {
        printf("%d * %d * %d = %d\n",i,i,i,i*i*i);
        i++;
    }
    return 0;
}
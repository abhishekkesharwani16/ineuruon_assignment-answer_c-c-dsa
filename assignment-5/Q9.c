// Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter how many number of qube to print on the screen-\n");
    scanf("%d",&n);
    printf("Qube of first 10 natural number is-\n");
    while(i<=n)
    {
        printf("%d * %d * %d = %d\n",i,i,i,i*i*i);
        i++;
    }
    return 0;
}
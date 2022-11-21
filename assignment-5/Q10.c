// Write a program to print a table of N
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter to print any number of table you want--------->\n");
    scanf("%d",&n);
    printf("Table of %d is-\n",n);
    while(i<=10)
    {
        printf("%d * %d = %d\n", n, i,n*i);
        i++;
    }
    return 0;
}
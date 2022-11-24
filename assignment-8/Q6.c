#include<stdio.h>
int main()
{
   int i,j,n;
   
    for(i=0;i<5;i++)
    {
        for ( j=0;j<=8-i;j++)
        {
             if(j>=i)
             printf("*");
             else
             printf(" ");
        }
        printf("\n");
    }
    return 0;
}
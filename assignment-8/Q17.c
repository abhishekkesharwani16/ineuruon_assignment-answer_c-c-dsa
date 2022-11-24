#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(i==0 || j==i || j==8-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
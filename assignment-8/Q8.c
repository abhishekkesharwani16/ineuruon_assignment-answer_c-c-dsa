#include<stdio.h>
int main()
{
   int i,j,n=1;
   
    for(i=0;i<4;i++)
    {
        n=1;
        for ( j=0;j<=4+i;j++)
        {
            if(j>=4-i)
            {
            printf("%d",n);
            if(j<4)
            n++;
            else
            n--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
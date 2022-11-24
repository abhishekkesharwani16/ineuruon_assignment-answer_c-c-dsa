#include<stdio.h>
int main()
{
   int i,j,n=1;
   
    for(i=0;i<4;i++)
    {
       n=1;
        for ( j=0;j<7;j++)
        {
             if(j>3-i && j<=2+i)
             printf(" ");
             else 
             printf("%d",n);
             {
             if(j<3)
             {
             n++;
             }
             else
             n--;
             
             }
        }
        printf("\n");
    }
    return 0;
}
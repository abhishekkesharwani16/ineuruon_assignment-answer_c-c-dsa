#include<stdio.h>
int main()
{
   int i,j;
   char n='A';
   
    for(i=0;i<7;i++)
    {
       n='A';
        for ( j=0;j<13;j++)
        {
             if(j>6-i && j<=5+i)
             printf(" ");
             else 
             printf("%c",n);
             {
             if(j<6)
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
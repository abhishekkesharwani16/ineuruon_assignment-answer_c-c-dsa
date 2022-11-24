#include<stdio.h>
int main()
{
   int i,j;
   char n='A';
   
    for(i=0;i<5;i++)
    {
        n='A';
        for ( j=0;j<=4+i;j++)
        {
            if(j>=4-i)
            {
            
            printf("%c",n);
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
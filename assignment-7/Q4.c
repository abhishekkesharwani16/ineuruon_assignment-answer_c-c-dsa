// 4. Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
   int i,x,y;
   printf("Enter two numbers-\n");
   scanf("%d %d",&x,&y);
   for(i=1;i<x*y;i++)
   {
    if(i%x==0 && i%y==0)
       {
        printf("%d\n",(x*y/i));
        break;
       }
    
   }
   return 0;
}
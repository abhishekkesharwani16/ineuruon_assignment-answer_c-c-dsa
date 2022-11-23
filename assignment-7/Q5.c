// 5. Write a program to check whether two given numbers are co-prime numbers or not
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
        printf("Because HCF are = %d\n",(x*y/i));
        break;
       }
    
   }
    
   if((x*y/i)==1)
   printf("So Two %d and %d are co-prime\n",x,y);
   else
   printf("So Not co-prime\n");
   return 0;
}
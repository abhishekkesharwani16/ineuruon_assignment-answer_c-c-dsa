// 6. Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
    int i,flag=0,N;
    
    for(N=1;N<=100;N++)
    {
        flag=0;
        for(i=2;i<N/2;i++)
      {
        if(N%i==0)
        {
          flag=1;
          break;
        }
      }
      if(flag==0)
      printf("%d\n",N);
    }
    return 0;
}
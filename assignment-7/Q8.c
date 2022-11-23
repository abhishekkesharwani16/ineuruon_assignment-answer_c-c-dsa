// 8. Write a program to find next Prime number of a given number
 #include<stdio.h>
int main()
{
    int i,flag=0,N,s,e;
    printf("enter a number-\n");
    scanf("%d",&s);
    printf("Next prime number of %d-------->\n",s);
    for(N=s;N<=2*s;N++)
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

      if(flag==0 && N !=1 )
      {
      printf("%d\n",N);
      break;
    }
    }
    return 0;
}
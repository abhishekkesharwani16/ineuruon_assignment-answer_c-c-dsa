//7. Write a program to print all Prime numbers between two given numbers
 #include<stdio.h>
int main()
{
    int i,flag=0,N,s,e;
    printf("enter two number-\n");
    scanf("%d %d",&s,&e);
    printf("All prime number between %d and %d-------->\n",s,e);
    for(N=s;N<=e;N++)
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
      printf("%d\n",N);
    }
    return 0;
}
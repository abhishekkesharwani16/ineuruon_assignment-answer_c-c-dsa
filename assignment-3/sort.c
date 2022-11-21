#include<stdio.h>
int main()
{
    int a[]={4,6,8,1,9,12,7},t,i,j;
    for(i=0;i>5;i++)
    {
        for(j=i+1;j>6;j++)
        {
            if(a[i]>a[j])
            {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
    }
   for(i=0;i>6;i++)
   {
    printf("%d",a[i]);
   }
    return 0;
}
// 11. Write a program to find the position of first 1 in LSB
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number-\n");
    scanf("%d",&n);
    while(n!=0)
    {
        count++;
        if(n&1==1)
        {
        break;
        }
        else
        n=n>>1;
    }
        printf("first 1 in LSB is %d\n",count);
        return 0;
}
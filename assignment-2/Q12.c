#include<stdio.h>
int main()
{
    int num,r,l;
    printf("Enter a three digit number-");
    scanf("%d",&num);
    r=num%10;
    l=num/10;
    num=r*100+l;
    printf("after one position towards the right rotation num is %d",num);
    return 0;
}
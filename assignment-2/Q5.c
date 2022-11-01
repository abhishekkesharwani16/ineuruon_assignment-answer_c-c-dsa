#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter a three digit number:");
    scanf("%d",&a);
    b=a%10;
    c=a/100;
    d=a/10;
    e=d%10;
    f=c+e+b;
    printf("Some of three digits %d",f);
    return 0;
}
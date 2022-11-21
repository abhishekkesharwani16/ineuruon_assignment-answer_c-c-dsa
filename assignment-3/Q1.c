#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number-");    
    scanf("%d",&x);
    if(x<0)
    printf("%d is non-positive number",x);
    else
    printf("%d is positive number",x);
    return 0;
}
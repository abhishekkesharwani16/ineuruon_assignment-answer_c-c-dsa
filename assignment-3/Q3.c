#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number-");
    scanf("%d",&num);
    if(num%2==0)
    printf("the given number(%d) is even number",num);
    else
    printf("the given number(%d) is odd number",num);
    return 0;
}
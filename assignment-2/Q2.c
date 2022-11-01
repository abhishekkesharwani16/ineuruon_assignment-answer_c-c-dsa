#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("No without last digit is %d",num/10);
    return 0;
}
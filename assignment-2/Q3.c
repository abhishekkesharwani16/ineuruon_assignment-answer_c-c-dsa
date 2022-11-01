#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("Enter the integer value of num1 & num2\n");
    scanf("%d&%d",&num1,&num2);
    printf("Before swapping the value is num1=%d, num2=%d\n",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("after swapping the value is num1=%d, num2=%d ",num1,num2);
    return 0;

}
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num>0)
    printf("number is positive\n");
    else 
    {   
        if(num==0)
        printf("number is zero\n");
        else
        printf("number is negative\n");
    }
    return 0;
}
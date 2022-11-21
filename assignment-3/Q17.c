#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter value of three sides of triangle\n");
    scanf("%f %f %f",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (a+c)>b)
    printf("Triangle is  valid\n");
    else
    printf("Triangle is not valid\n");
    
    return 0;
}
// 1. Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>

float area(float redius)
{
    return 3.14*redius*redius;
}

int main()
{
    float redius;
    printf("Enter a redius--\n");
    scanf("%f",&redius);
    printf("Area of circle is = %f",area(redius));
    return 0;
}
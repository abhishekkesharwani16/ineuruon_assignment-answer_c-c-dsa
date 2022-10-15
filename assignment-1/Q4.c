#include<stdio.h>
int main()
{
    float r,AOC;
    printf("Enter a redius\n");
    scanf("%f",&r);
    AOC=3.14*r*r;
    printf("\"Area of circle is %f having the redius %f\"",AOC,r);
    return 0;
}
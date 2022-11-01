#include<stdio.h>
int main()
{
    float INR;
    printf("Enter the amount in INR-");
    scanf("%f",&INR);
    printf("Assume that 1 USD = 76.23 INR\n then, 1 INR = 1/76.23 USD \n");
    printf(" so, %f INR =%f USD",INR,INR/76.23);
    return 0;
}
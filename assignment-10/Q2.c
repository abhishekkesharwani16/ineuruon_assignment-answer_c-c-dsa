//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>

float simpleInterest(float P, float R,float T)
{
    return (P*R*T)/100;
}

int main()
{
    float P,R,T;
    printf("Enter the value of priciple, rate and value with seperate comma(,)-\n");
    scanf("%f,%f,%f",&P,&R,&T);
    printf("Simple interest is = %f\n",simpleInterest(P,R,T));
    return 0;
}
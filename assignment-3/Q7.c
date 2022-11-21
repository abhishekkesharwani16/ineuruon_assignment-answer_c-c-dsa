#include<stdio.h>
int main()
{
    int a,b,c,discriminant;
    printf("Enter the coefficient a, b, c\n");
    scanf("%d %d %d",&a,&b,&c);
    discriminant = b*b-4*a*c;
    if(discriminant>0)
    printf("Roots are real and distinct\n");
    else if(discriminant==0)
    printf("Roots are real and equall\n");
    else
    printf("Roots are imaginary");
    return 0;
}
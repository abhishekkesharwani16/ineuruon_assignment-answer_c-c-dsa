#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number-");
    scanf("%d",&x);
    (x&1)? printf("odd"): printf("even");
    return 0;
}
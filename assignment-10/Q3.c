// 3. Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)

#include<stdio.h>

int evnORodd(int n)
{
    return (n%2==0);

}

int main()
{
    int n;
    printf("Enter a number--\n");
    scanf("%d",&n);
    if(evnORodd(n)==1)
    printf("even");
    else
    printf("odd");
    return 0;
}
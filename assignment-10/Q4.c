// 4. Write a function to print first N natural numbers (TSRN)
#include <stdio.h>
void naturalNumber(int n)
{
    int i;
    for (i = 1; i <= n; i++)

      printf("%d\n",i);
}

int main()
{
    int n;
    printf("Enter a number-\n");
    scanf("%d", &n);
    naturalNumber(n);
    return 0;
}
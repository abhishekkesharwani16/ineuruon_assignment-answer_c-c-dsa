#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two number-");
    scanf("%d %d", &x,&y);
    if(x>y)
    printf("X is greater");
    else
      {
         if (x<y)
         printf("y is greater");
         else{
         printf("x==y\n");
         printf("%d",x);
             }
      }
    return 0;
}
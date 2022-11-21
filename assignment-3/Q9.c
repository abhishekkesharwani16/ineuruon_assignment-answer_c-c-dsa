#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter three number\n");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y && x>z)
    printf("x is greater\n");
    else if(y>x && y>z)
    printf("y is greater\n");
    else if(z>x && z>y)
    printf("z is greatest\n");
    else if(x==y || y==z || x==z)
    printf(" greatets number are repeated\n");
   
    return 0;
}
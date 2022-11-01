#include<stdio.h>
int main()
{
    int a,b;
    a=20;
    b=50;
    printf("Before swaping the no is-a=%d, b=%d\n",a,b);
    a=a+b; //70
    b=a-b; //20
    a=a-b; //50
    printf("after swapping the no is \n a=%d,b=%d",a,b);
    return 0;

}
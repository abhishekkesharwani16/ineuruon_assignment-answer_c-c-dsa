//  Write a program to print the first 10 odd natural numbers in reverse order
 #include<stdio.h>
int main()
{
int i=20;
printf("first 10 odd natural numbers in recerse order is-\n");
while (i>0)
{
    if(i%2!=0)
    
    printf("%d\n",i);
    i--;
}
}
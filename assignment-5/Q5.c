// Write a program to print the first N odd natural numbers in reverse order.
 #include<stdio.h>
int main()
{
int i,n;
printf("Enter how many odd natural number to print-\n");
scanf("%d",&n);
printf("first 10 odd natural numbers in recerse order is---------->\n");
i=2*n;
while (i>0)
{
    if(i%2!=0)
    
    printf("%d\n",i);
    i--;
}
}
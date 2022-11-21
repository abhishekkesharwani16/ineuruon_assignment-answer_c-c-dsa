// Write a program to print the first N odd natural numbers
 #include<stdio.h>
int main()
{
int i=0,n;
printf("Enter how many odd natural number to print-\n");
scanf("%d",&n);
printf("first N odd natural numbers is-------->\n");
while (i<=2*n)
{
    if(i%2!=0)
    
    printf("%d\n",i);
    i++;
}
}

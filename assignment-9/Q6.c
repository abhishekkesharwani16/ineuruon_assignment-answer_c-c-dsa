//  Program to check whether a year is a leap year or not. Using switch statement

#include<stdio.h>
int main()
{
int year;
printf("Enter a year to check year is leap year or not\n");
scanf("%d",&year);

switch(year%100 == 0)
{
    case 1:
    switch(year%400 ==0)
    {
        case 1:
        printf("year is leap year\n");
        break;

        case 0:
        printf("year is not leap year\n");
        break;
    }
    break;

    case 0:
    switch(year%4 ==0)
    {
     case 1:
     printf("year is a leap year\n");
     break;

     case 0:
     printf("year in not a leap year\n");
     break;
    }
    break;
}
return 0;
}
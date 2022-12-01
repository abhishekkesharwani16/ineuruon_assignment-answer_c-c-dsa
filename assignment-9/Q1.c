// Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main()
{
    int mn;
    printf("Enter month number-\n");
    scanf("%d",&mn);
    switch (mn==1 || mn==3 || mn==5 || mn==7 || mn==8 || mn==10 || mn==12)
    {
    case 1:
        printf("31 days");
        break;
    case 0:
       switch (mn==4 || mn==6 || mn==9 || mn==11)
       {
       case 1:
        printf("30 days");
        break;
       
       case 0:
       printf("28/29 days");
        break;
       }
    }
    return 0;
}
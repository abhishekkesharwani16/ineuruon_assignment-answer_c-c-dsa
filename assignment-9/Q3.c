// 3. Write a program which takes the day number of a week and displays a unique
// greeting message for the day.
#include<stdio.h>
int main()
{
    int choice;
    printf("Enter number of week-\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("Sunday\n");
        break;
        case 2:
        printf("Monday\n");
        break;
        case 3:
        printf("Tuesday\n");
        break;
        case 4:
        printf("Wednsday\n");
        break;
        case5:
        printf("Thirsday\n");
        break;
        case 6:
        printf("Friday\n");
        break;
        case 7:
        printf("Saturday\n");
        break;
    }
    return 0;
}
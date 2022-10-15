#include<stdio.h>
int main()
{
    int Date, Month, Year;
    printf("Enter date,month,year as format-DD/MM/YYYY\n");
    scanf("%d/%d/%d",&Date,&Month,&Year);
    printf("Day-%d,Month-%d,Year-%d",Date,Month,Year);
    getch();
    return 0;
}
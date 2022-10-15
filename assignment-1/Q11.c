#include<stdio.h>
int main()
{
    int Hour, Minute;
    printf("Enter hour, minute as format-HH:MM\n");
    scanf("%d:%d",&Hour,&Minute);
    printf("\"%d:%d\" ",Hour,Minute);
    printf("converted to ");
    printf("\"%d Hour and %d Minute\"",Hour, Minute);
  
    return 0;
}
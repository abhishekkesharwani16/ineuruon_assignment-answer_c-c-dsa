// 9. Program to Convert even number into its upper nearest odd number Switch
// Statement.

#include<stdio.h>
int main()
{
    int evenNumber;
    printf("Enter the even number to convert into its upper nearest odd number--\n");
    scanf("%d",&evenNumber);

    switch(evenNumber%2==0)
    {
        case 1:
        printf("%d\n",evenNumber+1);
        break;

        case 0:
        printf("It is already odd %d\n",evenNumber);
    }

    return 0;

}
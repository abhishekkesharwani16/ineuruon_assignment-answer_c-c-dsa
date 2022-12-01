// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an isosceles
// triangle or not
// b. Check whether a given set of three numbers are lengths of sides of a right
// angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle or not
// d. Exit

#include<stdio.h>
#include<stdlib.h>
int main()
{
int n1,n2,n3;
char choice;


while(1)
{
    printf(" a. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
    printf(" b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
    printf(" c. Check whether a given set of three numbers are equilateral triangle or not\n");
    printf("d. Exit\n");
   
    fflush(stdin);
    scanf("%c",&choice);

    switch(choice)
    {
        case 'a':
        printf("Enter three number are length -\n");
        scanf("%d %d %d",&n1,&n2,&n3);
        if(n1==n2 || n2==n3 || n1==n3)
        printf("yes it is an isosceles triangle\n");
        else
        printf("No it is not an isosceles triangle-\n");
        break;

        case 'b':
        printf("Enter three number are length -\n");
        scanf("%d %d %d",&n1,&n2,&n3);
        if(n1*n1 + n2*n2 == n3*n3 || n2*n2 + n3*n3 == n1*n1 || n1*n1 + n3*n3 == n2*n2)
        printf("yes it is a right angle triangle\n");
        else
        printf("No it is not a right angle triangle-\n");
        break;

        case 'c':
        printf("Enter three number are length -\n");
        scanf("%d %d %d",&n1,&n2,&n3);
        if(n1==n2 && n2==n3 && n1==n3)
        printf("yes it is an equilateral triangle\n");
        else
        printf("No it is not an equilateral triangle-\n");
        break;

        case 'd':
        return 0;
        break;
    }
}

return 0;
}
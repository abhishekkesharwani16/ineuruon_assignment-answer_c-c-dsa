//2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit

#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n1,n2;
    char choice;
    while(1)
    {
    printf("a. Addition\n");
    printf("b. Subtraction\n");
    printf("c. Multiplication\n");
    printf("d. Division\n");
    printf("e. Exit\n");

    fflush(stdin);
    scanf("%c",&choice);
    fflush(stdin);
    switch(choice)
    {
        case 'a':
        printf("Enter two number-\n");
        scanf("%d %d",&n1,&n2);
        printf("Addition of %d and %d is = %d\n",n1,n2,n1+n2);
        break;
        case 'b':
        printf("Enter two number-\n");
        scanf("%d %d",&n1,&n2);
        printf("Subtraction of %d and %d is = %d\n",n1,n2,n1-n2);
        break;
        case 'c':
        printf("Enter two number-\n");
        scanf("%d %d",&n1,&n2);
        printf("Multiplication of %d and %d is = %d\n",n1,n2,n1*n2);
        break;
        case 'd':
        printf("Enter two number-\n");
        scanf("%d %d",&n1,&n2);
        printf("Division of %d and %d is = %d\n",n1,n2,n1/n2);
        break;
        case 'e':
        return 0;
        break;
    }
    }
    return 0;
}
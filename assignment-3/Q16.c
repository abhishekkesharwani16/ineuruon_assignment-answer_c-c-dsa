#include<stdio.h>
int main()
{
    char your_alphabet;
    printf("Enter single Alphabet(upper or lower or )\n");
    scanf("%c",&your_alphabet);
    if(your_alphabet>=65 && your_alphabet<=90)
    printf("Given alphabet is upper case latter\n");
    else if(your_alphabet>=97 && your_alphabet<=122)
    printf("Given alphabet is lower case latter\n");
    else if(your_alphabet>=48  && your_alphabet<=57)
    printf("Given input is digit");
    else
    printf("Special character");
    return 0;
}
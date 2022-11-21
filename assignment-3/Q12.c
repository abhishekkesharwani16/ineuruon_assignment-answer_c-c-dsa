#include<stdio.h>
int main()
{
    char your_alphabet;
    printf("Enter single Alphabet(upper or lower)\n");
    scanf("%c",&your_alphabet);
    //if(your_alphabet>='A' && your_alphabet<='Z')
    //printf("Given alphabet is upper case latter\n");
    //else if(your_alphabet>='a' && your_alphabet<='b')
    //printf("Given alphabet is lower case latter\n");


    if(your_alphabet>=65 && your_alphabet<=90)
    printf("Given alphabet is upper case latter\n");
    else if(your_alphabet>=97 && your_alphabet<=122)
    printf("Given alphabet is lower case latter\n");
    return 0;
}
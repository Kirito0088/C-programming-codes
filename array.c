#include<stdio.h>
#include<string.h>

int main()
{
    char input[100] = {"Meow Meow"};
    printf("Enter a string: ");

    int length = strlen(input);
    printf("String lenth = %d\n", length);

    char copy[100];
    strcpy(copy,input);
    printf("Copy: %s\n", copy);

    return 0;
}

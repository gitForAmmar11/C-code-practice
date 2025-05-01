//A program to separate the individual characters from a string
#include<stdio.h>

int main()
{
    char str[50];
    printf("Enter a string: ");
    scanf("%[^\n]",str);

    for(int i=0; str[i]!='\0'; i++){
    printf("%c ",str[i]);
    }

    return 0;
}

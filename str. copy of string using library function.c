//Finding copy of string using library function
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30];
    char str2[30];

    printf("Enter your string for copy: ");
    scanf("%[^\n]",str1);

    strcpy(str2,str1);
    printf("The copy of string is: %s",str2);

    return 0;
}

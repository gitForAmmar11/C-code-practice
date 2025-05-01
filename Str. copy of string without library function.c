//Finding copy of string without using library function
#include<stdio.h>
int main()
{
    char str1[30];
    char str2[30];
    int i;

    printf("Enter your string for copy: ");
    scanf("%[^\n]",str1);

    for(i=0; str1[i]!='\0'; i++){
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("The copy of string is: %s",str2);

    return 0;
}

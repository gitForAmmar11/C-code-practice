//Joining two string by using library function
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30];
    char str2[30];

    printf("Enter string 1: ");
    scanf("%[^\n]",str1);
    printf("Enter string 2: ");
    fflush(stdin);
    scanf("%[^\n]",str2);

    strcat(str1,str2);

    printf("Concatenation string is: %s\n",str1);

    return 0;
}

//Comparing two string using library function
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

    int com = strcmp(str1,str2);

    if(com==0){
        printf("Strings are equal!\n");
    }
    else
        printf("Strings are not equal!\n");

    return 0;
}

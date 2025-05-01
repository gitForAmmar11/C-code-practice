//Comparing two string without using library function
#include<stdio.h>

int main()
{
    char str1[30];
    char str2[30];

    printf("Enter string 1: ");
    scanf("%[^\n]",str1);
    printf("Enter string 2: ");
    fflush(stdin);
    scanf("%[^\n]",str2);

    int i = 0;
    while (str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0' ){
        ++i;
    }
    if(str1[i] == '\0' && str2[i] == '\0'){
        printf("Strings are equal!\n");
    }
    else{
        printf("Strings are not equal!\n");
    }

    return 0;
}
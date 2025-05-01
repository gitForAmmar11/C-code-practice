//Finding length of string using library function
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[30];
    printf("Enter Your String: ");
    scanf("%[^\n]",ch);

    int length = strlen(ch);
    printf("Length is: %d ",length);
    return 0;
}

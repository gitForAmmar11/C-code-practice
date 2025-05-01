//Finding length of string without using library function
#include<stdio.h>
int main()
{
    char ch[30];
    printf("Enter Your String: ");
    scanf("%[^\n]",ch);

    int i, len=0;
    for(i=0; ch[i]!='\0'; i++){
        len++;
    }
    printf("Length is: %d ",len);
    return 0;
}

//Reverse a string without using library function
#include<stdio.h>

int main()
{
    char str[50];
    printf("Enter a string for reverse: ");
    scanf("%[^\n]",str);
    int len=0;

    for(int i=0; str[i]; i++){
        len++;
    }
    printf("Reverse is:");
    for(int j=len; j>=0; j--){
        printf("%c",str[j]);
    }

    return 0;
}

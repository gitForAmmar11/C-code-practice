//Reverse a string using library function 
#include<stdio.h>

int main()
{
    char str[50];
    printf("Enter a string for reverse: ");
    scanf("%[^\n]",str);

    strrev(str);

    printf("Reverse is: %s",str);
    
    return 0;
}

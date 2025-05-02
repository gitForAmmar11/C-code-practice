#include <stdio.h>

int main()
{
    char ch;
    printf("Give an alphabet: ");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("This Alphabet is a vowel");
        break;
    default:
        if(ch >= 'a' && ch <='z'){
            printf("Consonant");
        }
        else if(ch >= 'A' && ch <= 'Z'){
            printf("Consonant");
        }
        else{
            printf("Invalid Input");
        }
    }
    return 0;
}

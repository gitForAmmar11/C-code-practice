//Joining two string without using library function
#include<stdio.h>
int main()
{
    char str1[30];
    char str2[30];
    char str3[50];
    int i, j, k;

    printf("Enter string 1: ");
    scanf("%[^\n]",str1);
    printf("Enter string 2: ");
    fflush(stdin);
    scanf("%[^\n]",str2);

    for(i=0; str1[i]!='\0'; i++){
        str3[k]=str1[i];
        k++;
    }
    for(j=0; str2[j]!='\0'; j++){
        str3[k]=str2[j];
        k++;
    }
    str3[k]='\0';

    printf("Concatenation string is: %s\n",str3);

    return 0;
}

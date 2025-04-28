//detect the last word of a sentence with function & string
#include<stdio.h>

void last_word(char name[])
{
    int len=0, i, index;
    for(i=0; name[i]!='\0'; i++){
        len++;
    }
    for(i=len-1; name[i]!=' '; i--){
        index = i;
    }
    for(i=index; name[i]!='\0'; i++){
        printf("%c",name[i]);
    }
    printf("\n");
}
int main()
{
    char name[100];
    printf("Enter A Sentence: ");
    scanf("%[^\n]",name);

    last_word(name);

    return 0;
}

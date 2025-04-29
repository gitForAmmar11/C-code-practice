#include<stdio.h>
int main()
{
    char character;
    int i=0;

    while (character!= 'A'){
        i++;
        scanf("%c",&character);
	fflush(stdin);
        if(character =='A'){
            break;
        }

        printf("Input %d : %c\n",i,character);
    }
}

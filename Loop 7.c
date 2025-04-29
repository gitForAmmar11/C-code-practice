#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char b;
    for(i=1; i<i+1; i++){
        scanf(" %c",&b);
        if(b!='A')
            printf("Input %d:%c\n",i,b);

        if(b=='A')
            break;
    }
    return 0;
}

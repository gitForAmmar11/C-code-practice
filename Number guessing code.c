#include <stdio.h>
int main()
{
    int x, n1, n2, n3;
    printf("Player 1 Pick A Number: ");
    scanf("%d",&x);
    printf("Player 2 Guess The Number Within N=3 Tries!");

    scanf("%d",&n1);
    if(n1==x){
        printf("Right, Player-2 wins!");
    }
    else{
        printf("Wrong, 2 Chance(s) Left!\n");
        scanf("%d",&n2);
        if(n2==x){
            printf("Right, Player-2 wins!\n");
        }
        else{
            printf("Wrong, 1 Chance(s) Left!\n");
            scanf("%d",&n3);
        if(n3==x){
            printf("Right, Player-2 wins!\n");
        }
        else{
            printf("Wrong, 0 Chance(s) Left!\n");
            printf("Player-1 wins!");
        }
        }
    }


    return 0;
}

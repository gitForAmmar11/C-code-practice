#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter your number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        if(i%2==0){
            printf("0 ");}
            if(i%2==1){
                printf("1 ");
            }
    }
    printf("\n");
    return 0;
}


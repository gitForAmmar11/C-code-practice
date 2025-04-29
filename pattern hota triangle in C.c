#include<stdio.h>
int main()
{
    int i, h, n;
    printf("How many value you want: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(h=1; h<=i; h++){
            printf("%d ",h);
        }
        printf("\n");
    }
    for(i=n-1; i>=1; i--){
        for(h=1; h<=i; h++){
            printf("%d ",h);
        }
        printf("\n");
    }
    return 0;
}

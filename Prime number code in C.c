#include<stdio.h>
int main()
{
    int i, n, flag=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n==0 || n==1)
        flag = 1;

    for(i=2; i<=n/2; i++){
        if(n%i==0){
            flag = 1;
            break;
        }

    }
    
    //flag = 0 means the number is prime
    if (flag == 0){
        printf("Prime Number");
    }
    else{
        printf("Not Prime Number");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int i,even_sum=0,odd_sum=0;

    for(i=1; i<=100; i++){
        if(i%2==0){
            even_sum=even_sum+i;
        }
        else{
            odd_sum=odd_sum+i;
        }
    }
    printf("Even sum= %d\n Odd sum= %d",even_sum,odd_sum);

    return 0;
}

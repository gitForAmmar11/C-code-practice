#include<stdio.h>
int main(){
    int number,n;
    int result=0;
    scanf("%d",&n);
    for(number = 1;number<=n;number++){
        if(number%2==1){
            result = result + number;
        }else{
            result = result - number;
        }
    }
    printf("%d",result);
}

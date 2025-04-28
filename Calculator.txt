#include <stdio.h>

int main()
{
    int num1, num2, sum, sub, multi, div;
    char op;
    printf("first: ");
    scanf("%d",&num1);

    printf("op: ");
    scanf(" %c",&op);

    printf("second: ");
    scanf("%d",&num2);

    switch (op){
case '+':
    sum = num1+num2;
    printf("sum: %d",sum);
    break;
case '-':
    sub = num1-num2;
    printf("sub: %d",sub);
    break;
case '*':
    multi = num1*num2;
    printf("multi: %d",multi);
    break;
case '/':
    if(num2!=0){
    div = num1/num2;
    printf("div: %d",div);
    }
   else{
        printf("Invalid num2 can't be zero");
    }
    break;
default:
    printf("Invalid Input");
    }
    return 0;
}

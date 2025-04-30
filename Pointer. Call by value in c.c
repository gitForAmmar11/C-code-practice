//call by value in pointer
#include<stdio.h>

void fun(int x, int y){

    x = 3;
    y = 4;

    printf("x = %d, y = %d\n", x,y);
}

int main(){

    int a = 5, b=10;

    fun(a,b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
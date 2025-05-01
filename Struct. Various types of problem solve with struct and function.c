//Various types of problem solve with struct
#include<stdio.h>
struct point{
    int x;
    int y;
}p1,p3;

void add(int i, int j){

    int k = i+j;
    printf("%d", k);
}
int main(){

    p1.x = 2;
    p1.y = 3;

    p3.x = 9;
    p3.y = 5;

    struct point p2 = {5,6};

    printf("p1--> x: %d y: %d\n", p1.x, p1.y);
    printf("p2--> x: %d y: %d\n", p2.x, p2.y);
    printf("p3--> x: %d y: %d\n", p3.x, p3.y);

    add(p1.x, p1.y);

    int result = p2.x+p2.y;

    printf("\n%d", result);

    return 0;
}

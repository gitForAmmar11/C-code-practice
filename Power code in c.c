#include<stdio.h>
int main()
{
    float x, y, res;
    printf("Enter the base: ");
    scanf("%f",&x);
    printf("Enter the power: ");
    scanf("%f",&y);

    res = pow (x,y);
    printf("Power is: %.3f",res);
    return 0;
}

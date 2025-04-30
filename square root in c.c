#include<stdio.h>
int main()
{
    double n,res;
    printf("Enter the base: ");
    scanf("%lf",&n);

    res = sqrt (n);
    printf("Square root is: %.3lf",res);
    return 0;
}

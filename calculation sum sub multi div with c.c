#include <stdio.h>

int main()
{
    float a, b, sum, sub, multi, div;

    printf("Enter 1st Number: ");
    scanf("%f",&a);

    printf("Enter 2nd Number: ");
    scanf("%f",&b);

    sum = a+b;
    sub = a-b;
    multi = a*b;
    div = a/b;

    printf("%f + %f = %f\n",a,b,sum);
    printf("%f - %f = %f\n",a,b,sub);
    printf("%f * %f = %f\n",a,b,multi);
    printf("%f / %f = %f\n",a,b,div);

    return 0;
}

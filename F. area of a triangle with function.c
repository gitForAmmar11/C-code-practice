//Area of a triangle with function.
#include<stdio.h>

double area (double b, double h);

int main()
{
    double base, height;
    printf("Enter the base: ");
    scanf("%lf",&base);

    printf("Enter the height: ");
    scanf("%lf",&height);

    //float res = area(base, height);
    //printf("The area is: %.3f",res);

    printf("The area is: %.3lf",area(base, height));
    return 0;

}

double area (double b, double h){
return .5*b*h;
}


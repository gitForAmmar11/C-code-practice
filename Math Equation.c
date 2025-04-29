#include<stdio.h>
#include<math.h>
int main()
{
    float a = 6.5;
    int t = 2, u = 5;
    float s;

    s = (float) (u*t)+ .5*a*pow(t,2);

    printf("The Result is:\n%.5f",s);
    return 0;
}

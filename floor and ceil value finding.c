#include <stdio.h>
int main()
{
    float float_val, floor_val, ceil_val;

    printf("Enter A Float Value: ");
    scanf("%f",&float_val);

    floor_val=floor(float_val);
    ceil_val=ceil(float_val);

    printf("Floor = %f Ceiling = %f",floor_val,ceil_val);

    return 0;
}


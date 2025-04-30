//Pointer Program to swap two numbers without using the 3rd variable
#include<stdio.h>
int main()
{
    int a;
    int b;

    printf("Enter the value of A:");
    scanf("%d",&a);
    printf("Enter the value of B:");
    scanf("%d",&b);

    int* p = &a;
    int* q = &b;

    printf("\nBefore swapping:\na = %d\nb = %d\n\n",*p,*q);

    *p = *p+*q;
    *q = *p-*q;
    *p = *p-*q;

    printf("After swapping:\na = %d\nb = %d\n",*p,*q);

    return 0;
}

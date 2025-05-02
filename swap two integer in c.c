#include<stdio.h>
 int main()
 {
     int a, b, c;
     printf("Enter the first value: ");
     scanf("%d",&a);
     printf("Enter the second value: ");
     scanf("%d",&b);

     c=a;
     a=b;
     b=c;
     printf("\nAfter swapping value of a&b!\n");
     printf("\na= %d\nb= %d",a,b);
     return 0;
 }

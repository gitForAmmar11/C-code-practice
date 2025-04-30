#include <stdio.h>
int main()
{
    int i, n, sum, reverse;
    printf("Enter Your Number: ");
    scanf("%d",&n);

    for(i=n; n!=0; n=n/10){
        sum = n%10;
        reverse = reverse*10+sum;
    }
    printf("%d",reverse);

    return 0;
}
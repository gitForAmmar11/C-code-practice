//Finding array element address with pointer
#include<stdio.h>
int main()
{
    int i,n, x[50];

    for(i=0; i<5; i++){
        printf("Address of x[%d] = %d\n",i,&x[i]);
    }
    printf("Address of Array x is: %d\n",&x);

    return 0;
}

#include<stdio.h>
int main()
{
    int i, sum=0, a[5];
    for(i=0; i<5; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++){
        sum +=a[i];
    }
    printf("sum is: %d\n",sum);
    printf("average is: %f\n",(float)sum/10);

    return 0;
}

#include<stdio.h>
int main()
{
    int i, n, sum=0, a[50];
    printf("How many number would you want: ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        sum +=a[i];
    }
    printf("sum is: %d\n",sum);
    printf("average is: %f\n",(float)sum/n);

    return 0;
}


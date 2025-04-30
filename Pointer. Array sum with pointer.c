//Array sum with pointer 
#include<stdio.h>
int main()
{
    int i,n, sum=0, x[50];
    printf("How many number you want for sum: ");
    scanf("%d",&n);

    printf("Enter the array Element: ");
    for(i=0; i<n; i++){
            scanf("%d",x+i);
    }
    for(i=0; i<n; i++){
            sum += *(x+i);
    }
    printf("The sum = %d\n",sum);

    return 0;
}
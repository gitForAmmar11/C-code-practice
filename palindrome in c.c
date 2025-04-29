#include <stdio.h>
int main()
{
    int i, n, rev, sum=0;
    printf("Enter An Integer Number: ");
    scanf("%d",&n);

    for(i=n; n!=0; n=n/10){
        sum = n%10;
        rev = rev*10+sum;
    }
    if(i==rev){
        printf("Yes %d",rev);
    }
    else{
        printf("No %d",rev);
    }

    return 0;
}

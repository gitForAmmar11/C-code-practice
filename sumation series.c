#include <stdio.h>

int main()
{
    int i, n, result=0;
    printf("Enter The Value of N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
    result = result+(i*i*(i+1));
    }
    printf("Result: %d",result);

    return 0;
}


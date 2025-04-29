/*pattern like 1
               2 2
               3 3 3 */
#include<stdio.h>
int main()
{
    int i, j, k=1, n;
    printf("Enter the  number you print: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d ",i);
        }
      printf("\n");
    }
    return 0;
}

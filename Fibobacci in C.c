#include<stdio.h>
int main()
{
   int i, n,fibo0, fibo1, fibo;
   printf("How many number you want: ");
   scanf("%d",&n);

   fibo0 = 0;
   fibo1 = 1;

   printf("%d %d ",fibo0,fibo1);

   for(i=2; i<n; i++){
    fibo = (fibo0+fibo1);
     printf("%d ",fibo);

    fibo0=fibo1;
    fibo1=fibo;
   }

    return 0;
}

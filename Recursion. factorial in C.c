//Recursion. factorial in C
#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number for factorial: ");
    scanf("%d",&x);

    int result = fact(x);
    printf("The result of %d!= %d",x,result);

}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

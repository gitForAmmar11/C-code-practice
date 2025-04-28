//A program to solve sum of two integer number with function.
//duibar sum korbe karon main function er odhine subfunction e 2bar calano hoice.

#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int num1, num2;
    printf("Enter two integer number: ");
    scanf("%d%d",&num1,&num2);

    printf("The Sum is: %d\n",sum(num1,num2));

    num1, num2;
    printf("Enter two integer number: ");
    scanf("%d%d",&num1,&num2);

    printf("The Sum is: %d",sum(num1,num2));
}


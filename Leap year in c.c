#include <stdio.h>
int main()
{
    int year;
    printf("Enter A Year: ");
    scanf("%d",&year);

    if((year%4==0 && year%100!=0) || (year%400==0)){
        printf("Yes",year);
    }
    else{
        printf("No",year);
    }

    return 0;
}

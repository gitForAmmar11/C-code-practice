#include <stdio.h>

int main()
{
    int day;
    printf("Enter the Day: ");
    scanf("%d",&day);

    switch(day)
    {
    case 1:
        printf("Saturday");
        break;
    case 2:
        printf("Sunday");
        break;
    case 3:
        printf("Monday");
        break;
    case 4:
        printf("Tuesday");
        break;
    case 5:
        printf("Wednessday");
        break;
    case 6:
        printf("Thusday");
        break;
    case 7:
        printf("Friday");
        break;
        default:
        printf("Invalid Input");
    }
    return 0;
}

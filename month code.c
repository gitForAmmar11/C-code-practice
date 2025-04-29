#include <stdio.h>

int main()
{
    int month;
    printf("Enter the number of Month(1-12): ");
    scanf("%d",&month);

    switch(month)
    {
    case 1:
        printf("Total number of day this month: 31",month);
        break;
    case 2:
        printf("Total number of day this month: 28",month);
        break;
    case 3:
        printf("Total number of day this month: 31",month);
        break;
    case 4:
        printf("Total number of day this month: 30",month);
        break;
    case 5:
        printf("Total number of day this month: 31",month);
        break;
    case 6:
        printf("Total number of day this month: 30",month);
        break;
    case 7:
        printf("Total number of day this month: 31",month);
        break;
    case 8:
        printf("Total number of day this month: 31",month);
        break;
    case 9:
        printf("Total number of day this month: 30",month);
        break;
    case 10:
        printf("Total number of day this month: 31",month);
        break;
    case 11:
        printf("Total number of day this month: 30",month);
        break;
    case 12:
        printf("Total number of day this month: 31",month);
        break;
    default:
        printf("Invalid month");

    }
    return 0;
}

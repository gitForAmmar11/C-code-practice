#include <stdio.h>

typedef struct EmployeesInfo
{
    int id;
    int phone_number;
    float salary;
    float allowance;
    float total_income;
} emp;

void employee_data_input(struct EmployeesInfo employee[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Employee[%d] id: \n", i + 1);
        scanf("%d",&employee[i].id);
        printf("Enter Employee[%d] phone number: \n", i + 1);
        scanf("%d",&employee[i].phone_number);
        printf("Enter Employee[%d] Salary: \n", i + 1);
        scanf("%f", &employee[i].salary);
    }
}

void allowance(struct EmployeesInfo employee[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (employee[i].salary <= 30000)
        {
            employee[i].allowance = ((employee[i].salary) * 0.15);
        }
        else if (employee[i].salary > 30000 && employee[i].salary <= 50000)
        {
            employee[i].allowance = ((employee[i].salary) * 0.20);
        }
        else if (employee[i].salary > 50000)
        {
            employee[i].allowance = ((employee[i].salary) * 0.25);
        }
    }
}

void total_income(struct EmployeesInfo employee[], int n)
{
    for (int i = 0; i < n; i++)
    {
        employee[i].total_income = (employee[i].salary + employee[i].allowance);
    }
}

void highest_salary_and_information(struct EmployeesInfo employee[], int n)
{
    float maxsalary = employee[0].salary;
    int index;

    for (int i = 0; i < n; i++)
    {
        if (employee[i].salary > maxsalary)
        {
            maxsalary = employee[i].salary;
            index = i;
        }
    }
    printf("\nHighest salary : %f", maxsalary);
    printf("\nID: %d", employee[index].id);
    printf("\nPhone number: %d", employee[index].phone_number);
    printf("\nAllowance: %.2f", employee[index].allowance);
    printf("\nTotal Income: %.3f", employee[index].total_income);

    printf("\n\n");
}

void lowest_salary_and_information(struct EmployeesInfo employee[], int n)
{
    float low_salary = employee[0].salary;
    int index;

    for (int i = 0; i < n; i++)
    {
        if (employee[i].salary < low_salary)
        {
            low_salary = employee[i].salary;
            index = i;
        }
    }
    printf("\nLowest salary : %f", low_salary);
    printf("\nID: %d", employee[index].id);
    printf("\nPhone number: %d", employee[index].phone_number);
    printf("\nAllowance: %.2f", employee[index].allowance);
    printf("\nTotal Income: %.3f", employee[index].total_income);

    printf("\n\n");
}

int main()
{

    int n;
    printf("\nHow many Employees?\n");
    scanf("%d", &n);

    emp employee_num[n];

    employee_data_input(employee_num, n);
    allowance(employee_num, n);
    total_income(employee_num, n);


    int choice;
    printf("\nBy which you want to search? \n");
    printf("1. Employee ID. \n2. Employee Phone Number.\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nEnter Employee's id to search: \n");
        int input1;
        scanf("%d",&input1);


        for (int i = 0; i < n; i++)
        {
            if (input1 == employee_num[i].id)
            {
                printf("\nID: %d", employee_num[i].id);
                printf("\nPhone number: %d", employee_num[i].phone_number);
                printf("\nAllowance: %.2f", employee_num[i].allowance);
                printf("\nTotal Income: %.3f", employee_num[i].total_income);

                lowest_salary_and_information(employee_num, n);
            }
        }
        break;

    case 2:
        printf("\nEnter Employee's phone number to search: \n");
        int input2;
        scanf("%d",&input2);

        for (int i = 0; i < n; i++)
        {
            if (input2 == employee_num[i].phone_number)
            {
                printf("\nID: %d", employee_num[i].id);
                printf("\nPhone number: %d", employee_num[i].phone_number);
                printf("\nAllowance: %.2f", employee_num[i].allowance);
                printf("\nTotal Income: %.3f", employee_num[i].total_income);

                highest_salary_and_information(employee_num, n);
            }
        }
        break;

    default: printf("\nPlease choose from 1 or 2");
        break;
    }

    return 0;
}

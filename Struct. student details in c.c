//Student details in c
#include<stdio.h>

struct student
{
    char name[20];
    int age;
    float salary;
};
int main()
{
    struct student Jiku, Tarek;
    printf("Enter Jiku's information:\n");
    fflush(stdin);
    scanf("%[^\n]",Jiku.name);
    scanf("%d",&Jiku.age);
    scanf("%f",&Jiku.salary);

    printf("Jiku's detail:\n");
    printf("Full Name: %s\n",Jiku.name);
    printf("Age: %d\n",Jiku.age);
    printf("Salary: %f\n",Jiku.salary);

    printf("Enter Tarek's information:\n");
    fflush(stdin);
    scanf("%[^\n]",&Tarek.name);
    scanf("%d",&Tarek.age);
    scanf("%f",&Tarek.salary);

    printf("Tarek's detail:\n");
    printf("Full Name: %s\n",Tarek.name);
    printf("Age: %d\n",Tarek.age);
    printf("Salary: %f\n",Tarek.salary);

    getch();

}

//Struct. student details with array (with loop also).
#include<stdio.h>

struct student
{
    char name[20];
    int age;
    float salary;
};
int main()
{
    struct student student[5];
    int i;
    printf("Enter student's information detail's::\n");
    for(i=0; i<5; i++){
    printf("Enter the name of student=%d: ",i+1);
    fflush(stdin);
    scanf("%[^\n]",&student[i].name);
    printf("Enter the age of student=%d: ",i+1);
    scanf("%d",&student[i].age);
    printf("Enter the salary of student=%d: ",i+1);
    scanf("%f",&student[i].salary);
    }

    printf("\n\nstudent's detail:\n");
    for(i=0; i<5; i++){
    printf("Full Name: %s\n",student[i].name);
    printf("Age: %d\n",student[i].age);
    printf("Salary: %f\n",student[i].salary);
    }

    getch();

}

//Struct with function finding age and even roll
#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    int age;
};
void stfntn1(struct student st[],int size){
     printf("Student who are age 14 or more!\n");
     for(int i=0; i<size; i++){
        if(st[i].age>=14){
            printf("%s\n",st[i].name);
        }
     }
}
void stfntn2(struct student st[],int size){
     printf("Student who's roll even!\n");
     for(int i=0; i<size; i++){
        if(st[i].roll%2==0){
            printf("%s\n",st[i].name);
        }
     }
}

int main()
{
    struct student st[10];
    for(int i=0; i<2; i++){
        printf("Enter the name of st%d: ",i+1);
        fflush(stdin);
        scanf("%[^\n]",st[i].name);
        printf("Enter the roll of st%d: ",i+1);
        scanf("%d",&st[i].roll);
        printf("Enter the age of st%d: ",i+1);
        scanf("%d",&st[i].age);
    }
        stfntn1(st,2);
        stfntn2(st,2);

    return 0;
}
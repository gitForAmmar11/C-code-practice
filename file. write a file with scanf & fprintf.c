//Printing name and age with scanf & fprintf in write mod
#include<stdio.h>
int main()
{
    FILE *star;
    char nam[100];
    int age;

    star = fopen("New_file.txt","w");

    if(star==NULL){
        printf("File not exist");
    }
    else{
        printf("File is open\n");
        printf("Enter full name: ");
        scanf("%[^\n]",nam);
        printf("\nEnter age: ");
        scanf("%d",&age);

        fprintf(star,"Name = %s\nAge = %d\n",nam,age);
        printf("File opened successfully\n");
        fclose(star);
    }
    return 0;
}

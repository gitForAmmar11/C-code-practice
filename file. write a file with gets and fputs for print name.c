//File with gets and fputs
#include<stdio.h>
int main()
{
    FILE *first;
    char name[100];

    first = fopen("test.txt","w");

    if(first==NULL){
        printf("File is not exist");
    }
    else{
        printf("File is open\n");
        printf("Enter your name:");
        gets(name);
        fputs(name,first);
        printf("File is written successfully\n");
        fclose(first);
    }

    return 0;
}

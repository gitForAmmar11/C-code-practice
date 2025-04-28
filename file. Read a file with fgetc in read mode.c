//read a file with fgetc in read mode
#include<stdio.h>
int main()
{
    char ch;
    FILE *tour;

    tour = fopen("test.txt","r");

    if(tour==NULL){
        printf("File is not exist!");
    }
    else{
        printf("File is open\n");
        while(!feof(tour)){
        ch = fgetc(tour);
        printf("%c",ch);
        }
        fclose(tour);
    }
    return 0;
}
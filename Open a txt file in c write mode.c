//Open a txt file in c write mode 
#include<stdio.h>
int main()
{
    FILE *file;

    file = fopen("test.txt","w");

    if(file==NULL){
        printf("File dosen't exist");

    }
    else{
        printf("File is Opened");
    fclose(file);   
    }

    return 0;
}
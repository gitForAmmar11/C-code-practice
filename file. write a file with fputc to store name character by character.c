//Open a file and store your name character by character in file
#include<stdio.h>
int main()
{
    FILE *first;
    char name[100]= "UIU UIU";
    int i;
    int length = strlen(name);

    first = fopen("basic_file.txt","w");

    if(first==NULL){
        printf("File is not exist");
    }
    else{
        printf("File is open\n");
        for(i=0; i<length; i++){
            fputc(name[i],first);
        }
        printf("File is written successfully\n");
        fclose(first);
    }

    return 0;
}

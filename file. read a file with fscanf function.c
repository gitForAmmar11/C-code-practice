//read a file with fscanf function
//sudhu matro ekta string print hobe. jodi aro string print korte hoy sekhetre formate spacifier kore fscanf e nite hobe  
#include<stdio.h>
int main()
{
    FILE *atn;
    char ch[100];

    atn = fopen("New_file.txt","r");

    if(atn==NULL){
        printf("File is not exist");
    }
    else{
        printf("File is open\n");
        fscanf(atn,"%s",ch);
        printf("%s\n",ch);

        fclose(atn);
    }
    return 0;
}

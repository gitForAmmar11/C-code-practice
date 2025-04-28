//read a file with fgets function 
#include<stdio.h>
int main()
{
    FILE *atn;
    char ch[50];

    atn = fopen("test.txt","r");

    if(atn==NULL){
        printf("File is not exist");
    }
    else{
        printf("File is open\n");
        while(!feof(atn)){
        fgets(ch,50,atn);
        printf("%s\n",ch);
        }
        fclose(atn);
    }
    return 0;
}

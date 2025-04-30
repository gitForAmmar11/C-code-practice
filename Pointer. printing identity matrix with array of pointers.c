//printing identity matrix with array of pointers
#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    printf("How many number you want for Identity Matrix: ");
    scanf("%d",&n);

    int row=n, column=n;
     int *ptr[row];

     for(int i=0; i<row; i++){
         ptr[i] = (int *) malloc(column * sizeof(int));
     }

     printf("\nEnter n*n positive integer: ");
     for(int i=0; i<row; i++){
         for(int j=0; j<column; j++){
             scanf("%d", ptr[i] + j);
         }
     }

     printf("The Identity Matrix is: \n");
     for(int i=0; i<row; i++){
         for(int j=0; j<column; j++){
                if(i==j){
             printf("1 ");
                }
                else{
                    printf("0 ");
                }
        }
        printf("\n");
     }
     return 0;
}
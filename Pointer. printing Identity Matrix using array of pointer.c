//printing Identity Matrix using array of pointer
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Give an integer number for Identity Matrix: ");
    scanf("%d",&n);

    int row=n, col=n;
    int *ptr[row];

    for(int i=0; i<row; i++){
        ptr[i] = (int *) malloc(col * sizeof(int));
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            ptr[i]+j;
        }
    }

    printf("\nThe Identity Matrix is: \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
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

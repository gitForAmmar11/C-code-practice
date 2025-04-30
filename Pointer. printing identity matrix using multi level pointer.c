//printing identity matrix using multi level pointer
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Give a number for Identity Matrix: ");
    scanf("%d",&n);

    int row=n, col=n;

    int **mtlvl = (int **) malloc(row * sizeof (int *));

    for(int i=0; i<row; i++){
        mtlvl[i] = (int *) malloc(col * sizeof (int));
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==j){
                mtlvl[i][j] = 1;
            }
            else{
                mtlvl[i][j] = 0;
            }
        }
    }
    printf("\nThe Identity Matrix is: \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ",mtlvl[i][j]);
        }
        printf("\n");
    }

    return 0;
}

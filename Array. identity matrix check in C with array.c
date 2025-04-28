#include <stdio.h>

int main()
{
    // Take dimensions as input
    int a1, a2;
    printf("Enter dimensions:\n");
    scanf("%d %d", &a1, &a2);

    // check whether it is a square matrix
    if (a1 != a2){
        printf("can not be an identity matrix");
    }
    else{
        // matrix declaration
        int matA[a1][a2];

        // matrix input
        printf("Enter a matrix\n");
        for (int i = 0; i < a1; i++){
            for (int j = 0; j < a2; j++){
                scanf("%d", &matA[i][j]);
            }
        }

        // actual loop for checking 
        for (int i = 0; i < a1; i++){
            for (int j = 0; j < a2; j++){
                if (i == j && matA[i][j] != 1){
                    printf("Not an identity matrix");
                    return 0;
                }
                else if (i != j && matA[i][j] != 0){
                    printf("Not an identity matrix");
                    return 0;
                }
            }
        }

        printf("Identity matrix");
    }

    return 0;
}
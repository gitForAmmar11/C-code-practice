#include <stdio.h>

int main()
{
    int a1 = 2, a2 = 3, b1 = 3, b2 = 4;

    int matA[a1][a2], matB[b1][b2];

    printf("Enter matrix A\n");
    for (int i = 0; i < a1; i++){
        for (int j = 0; j < a2; j++){
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Enter matrix B\n");
    for (int i = 0; i < b1; i++){
        for (int j = 0; j < b2; j++){
            scanf("%d", &matB[i][j]);
        }
    }

    if (a2 == b1){
        int res[a1][b2];

        for (int i = 0; i < a1; i++){
            for (int j = 0; j < b2; j++){
                res[i][j] = 0;
                for (int k = 0; k < a2; k++){
                    res[i][j] += matA[i][k] * matB[k][j];
                }
            }
        }

        for (int i = 0; i < a1; i++){
            for (int j = 0; j < b2; j++){
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Dimension mismatch.");
    }

    return 0;
}
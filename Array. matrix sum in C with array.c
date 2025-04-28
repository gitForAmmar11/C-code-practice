#include<stdio.h>

int main(){
    int a[2][2] = {
        {0, 1},
        {2, 3}
    },

    b[2][2] = {
        {5, 9},
        {7, 10}
    },

    c[2][2];


    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

}
#include<stdio.h>

int main(){

    int in=0;

    //printf("Enter the year : ");

    //scanf("%d",&year);


    while(in !=4){

        printf("Category :\n 1.Platers \n 2.Drinks \n 3.Cake \n 4.Exit \n");

        scanf("%d",&in);

        if(in == 1){
            printf("Items :\n 1.Fried rice \n 2.Chicken fry \n 3.Vegetable \n");

            scanf("%d",&in);

            switch(in){

            case 1:

                printf("Fried Rice served");

                break;

            case 2:

                printf("Chicken fry served");

                break;

            case 3:

                printf("Vegetable served");

                break;

            }


        }else if(in == 2){

            printf("Items :\n 1.Water \n 2.Coke \n");

            scanf("%d",&in);

            switch(in){

            case 1:

                printf("Water served");

                break;

            case 2:

                printf("Coke served");

                break;

            }

        }else if(in == 3){

            printf("Items :\n 1.Short Cake \n 2.Muffin \n");

            scanf("%d",&in);

            switch(in){

            case 1:

                printf("Short Cake served");

                break;

            case 2:

                printf("Muffin served");

                break;
            }
        }
    }

    return 0;
}
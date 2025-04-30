#include <stdio.h>

int main()
{
   int mark;
   printf("Enter The Number: ");
   scanf("%d",&mark);

   if(mark>=80 && mark<=100){
    printf("A plus\n");
   }
   else if(mark>=70 && mark<80){
    printf("A Grade\n");
   }
   else if(mark>=60 && mark<70){
    printf("A Minas\n");
   }
   else if(mark>=50 && mark<60){
    printf("B Grade");
   }
   else if(mark>=40 && mark<50){
    printf("C Grade");
   }
   else if(mark>=33 && mark<40){
    printf("D Grade");
   }
   else if(mark>=0 && mark<33){
    printf("Fail!");
   }
   else{
        printf("Invalid Input");
   }
    return 0;
}

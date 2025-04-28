//F. square with function
#include<stdio.h>
int sqr(int a){
return a*a;
}

int main(){
int val;
printf("Enter a value: ");
scanf("%d",&val);

int result = sqr(val);
printf("Square is: %d\n",result);

}

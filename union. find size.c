#include<stdio.h>

union test{
  int x, y;
};

int main()
{
    union test t1;

    t1.x = 15;
    t1.y = 21;

    printf("T1 is: %d\n",t1.x);
    printf("T1 is: %d\n",t1.y);

    getch();
}

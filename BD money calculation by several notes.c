#include<stdio.h>
int main()
{
    int total,note;
    printf("Enter your total amount: ");
    scanf("%d",&total);

    note = total/1000;
    printf("\n%d note(s) of 1000\n",note);

    total = total - (note*1000);
    note = total/500;
    printf("%d note(s) of 500\n",note);

    total = total - (note*500);
    note = total/200;
    printf("%d note(s) of 200\n",note);

    total = total - (note*200);
    note = total/100;
    printf("%d note(s) of 100\n",note);

    total = total - (note*100);
    note = total/50;
    printf("%d note(s) of 50\n",note);

    total = total - (note*50);
    note = total/20;
    printf("%d note(s) of 20\n",note);

    total = total - (note*20);
    note = total/10;
    printf("%d note(s) of 10\n",note);

    total = total - (note*10);
    note = total/5;
    printf("%d note(s) of 5\n",note);

    total = total - (note*5);
    note = total/2;
    printf("%d note(s) of 2\n",note);

    total = total - (note*2);
    note = total/1;
    printf("%d note(s) of 1\n",note);

    return 0;
}

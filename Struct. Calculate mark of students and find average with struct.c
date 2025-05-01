//Calculate mark of students and find average
#include <stdio.h>
//defining structure
struct Marks {
    int roll_no;
    char name[30];
    float ban_marks, eng_marks, math_marks;
};

//main function
int main() {

    struct Marks marks[2];

    for(int i=0; i<2; i++){
		printf("Student %d\n",i+1);
        printf("Enter roll no. :\n");
        scanf("%d", &marks[i].roll_no);
        printf("Enter name :\n");
        scanf("%s",marks[i].name);
        fflush(stdin);
        printf("Enter Bangla marks :\n");
        scanf("%f", &marks[i].ban_marks);
        printf("Enter English marks :\n");
        scanf("%f", &marks[i].eng_marks);
        printf("Enter Math marks :\n");
        scanf("%f", &marks[i].math_marks);
    }

	for(int i=0; i<2; i++) {
	    printf("Student %d\n",i+1);
	    float percentage = (marks[i].ban_marks + marks[i].eng_marks + marks[i].math_marks)/300.0*100;
	    printf("Percentage : %f\n", percentage);
	}
  return 0;
}

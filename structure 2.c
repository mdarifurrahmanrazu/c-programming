#include <stdio.h>
struct student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {

    struct student students[3];


    for (int i = 0; i < 3; i++) {
        printf("Enter information for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }


    int highest_marks_index = 0;
    for (int i = 1; i < 3; i++) {
        if (students[i].marks > students[highest_marks_index].marks) {
            highest_marks_index = i;
        }
    }


    printf("\nStudent with the highest marks:\n");
    printf("Name: %s, Roll Number: %d, Marks: %.2f\n", students[highest_marks_index].name,
        students[highest_marks_index].roll_number, students[highest_marks_index].marks);

    printf("\nStudents who have failed:\n");
    for (int i = 0; i < 3; i++) {
        if (students[i].marks < 60) {
            printf("Name: %s\n", students[i].name);
        }
    }

    return 0;
}

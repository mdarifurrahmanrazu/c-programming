#include <stdio.h>


struct Student_Info {
    char name[100];
    char address[200];
    float cgpa;
};

int main() {

    struct Student_Info StdList[5];
    float totalCGPA = 0.0;


    for (int i = 0; i < 5; i++) {
        printf("Enter information for student %d:\n", i + 1);

        printf("Student Name: ");
        scanf(" %[^\n]s", StdList[i].name);

        printf("Student Address: ");
        scanf(" %[^\n]s", StdList[i].address);

        printf("Student CGPA: ");
        scanf("%f", &StdList[i].cgpa);
        totalCGPA += StdList[i].cgpa;
    }


    float averageCGPA = totalCGPA / 5;


    printf("\nThe average CGPA of the students is: %.2f\n", averageCGPA);

    return 0;
}

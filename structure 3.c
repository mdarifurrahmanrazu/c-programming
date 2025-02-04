#include <stdio.h>


struct Emp_Info {
    char name[100];
    char address[200];
    float salary;
};

int main() {

    struct Emp_Info EmpList[4];
    float totalSalary = 0.0;


    for (int i = 0; i < 4; i++) {
        printf("Enter information for employee %d:\n", i + 1);

        printf("Employee Name: ");
        scanf(" %[^\n]s", EmpList[i].name);

        printf("Employee Address: ");
        scanf(" %[^\n]s", EmpList[i].address);

        printf("Employee Salary: ");
        scanf("%f", &EmpList[i].salary);
        totalSalary += EmpList[i].salary;
    }


    float averageSalary = totalSalary / 4;


    printf("\nThe average salary of the employees is: %.2f\n", averageSalary);

    return 0;
}

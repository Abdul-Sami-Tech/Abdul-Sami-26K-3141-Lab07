#include <stdio.h>
int main() {
    int salary[3][4][3];
    int i, j, k;
    int tot_salary;
    int dep_total;
    int hi_salary = 0;
    int hi_dep, hi_emp, hi_month;
    float avg_salary;
    for(i = 0; i < 3; i++) {
        printf("\nEnter salaries for Department-%d:\n", i + 1);

        for(j = 0; j < 4; j++) {
            printf("\nEnter salaries of Employee-%d:\n", j + 1);

            for(k = 0; k < 3; k++) {
                printf("Enter salary for Month-%d: ", k + 1);
                scanf("%d", &salary[i][j][k]);
            }
        }
    }
    printf("\nTotal Salary of Each Employee\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            tot_salary = 0;

            for(k = 0; k < 3; k++) {
                tot_salary += salary[i][j][k];
            }

            printf("Department-%d, Employee-%d: %d\n",
                   i + 1, j + 1, tot_salary);
        }
    }
    printf("\nDepartment Salary Details\n");

    for(i = 0; i < 3; i++) {
        dep_total = 0;

        for(j = 0; j < 4; j++) {
            for(k = 0; k < 3; k++) {
                dep_total += salary[i][j][k];
            }
        }

        avg_salary = dep_total / 3.0;

        printf("\nDepartment-%d:\n", i + 1);
        printf("Total salary: %d\n", dep_total);
        printf("Average monthly salary: %.2f\n", avg_salary);
    }
    hi_salary = salary[0][0][0];
    hi_dep = 0;
    hi_emp = 0;
    hi_month = 0;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            for(k = 0; k < 3; k++) {

                if(salary[i][j][k] > hi_salary) {
                    hi_salary = salary[i][j][k];
                    hi_dep = i;
                    hi_emp = j;
                    hi_month = k;
                }
            }
        }
    }
	printf("\n--- Highest Salary ---\n");
    printf("Highest salary: %d\n", hi_salary);
    printf("Department: %d\n", hi_dep + 1);
    printf("Employee: %d\n", hi_emp + 1);
    printf("Month: %d\n", hi_month + 1);

    return 0;
}

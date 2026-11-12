#include <stdio.h>
int main() {
    int marks[2][5][4];
    int i, j, k;
    int tot_std;
    int tot_sec;
    int hi_marks;
    int hi_std;
    int sum_assignment;
    float avg_assignment;
    for(i = 0; i < 2; i++) {
        printf("\nMarks of Section-%d:\n", i + 1);
		for(j = 0; j < 5; j++) {
            printf("\nMarks of Student-%d:\n", j + 1);

            for(k = 0; k < 4; k++) {
                printf("Enter marks in Assignment-%d: ", k + 1);
                scanf("%d", &marks[i][j][k]);
            }
        }
    }
    printf("\nTotal Marks of Each Student\n");
    for(i = 0; i < 2; i++) {
        hi_marks = -1;
        hi_std = 0;

        for(j = 0; j < 5; j++) {
            tot_std = 0;

            for(k = 0; k < 4; k++) {
                tot_std += marks[i][j][k];
            }
			printf("Section-%d, Student-%d: %d\n",
                   i + 1, j + 1, tot_std);
				if(tot_std < 20) {
                printf("Warning: Student-%d in Section-%d has low marks!\n",
                       j + 1, i + 1);
            }

            if(tot_std > hi_marks) {
                hi_marks = tot_std;
                hi_std = j;
            }
        }
		printf("\nHighest total in Section-%d is Student-%d: %d\n",
               i + 1, hi_std + 1, hi_marks);
    }
    printf("\nAverage Marks of Each Assignment \n");
	for(i = 0; i < 2; i++) {
        printf("\nSection-%d:\n", i + 1);

        for(k = 0; k < 4; k++) {
            sum_assignment = 0;

            for(j = 0; j < 5; j++) {
                sum_assignment += marks[i][j][k];
            }

            avg_assignment = sum_assignment / 5.0;

            printf("Assignment-%d Average: %.2f\n",
                   k + 1, avg_assignment);
        }
    }
    printf("\nTotal Marks of Each Section \n");
	for(i = 0; i < 2; i++) {
        tot_sec = 0;
		for(j = 0; j < 5; j++) {
            for(k = 0; k < 4; k++) {
                tot_sec += marks[i][j][k];
            }
        }
		printf("Section-%d Total: %d\n", i + 1, tot_sec);
    }
}

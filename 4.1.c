
#include <stdio.h>

int main() {
    int marks[4][2];
    int i, j;
    int tot_marks;

    int hi_in_mid = 0, hi_in_final = 0, hi_in_both = 0;
    int low_in_mid = 100, low_in_final = 100, low_in_both = 100;

    for (i = 0; i < 4; i++) {
        printf("Enter Marks of Student-%d:\n", i + 1);

        tot_marks = 0;

        for (j = 0; j < 2; j++) {
            if (j == 0)
                printf("Enter Mids marks: ");
            else
                printf("Enter Finals marks: ");

            scanf("%d", &marks[i][j]);

            tot_marks += marks[i][j];
        }

        printf("The total marks of Student-%d: %d\n\n",
               i + 1, tot_marks);
    }

    printf("\nMids\tFinals\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", marks[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {

            if (marks[i][j] > hi_in_both)
                hi_in_both = marks[i][j];

            if (marks[i][j] < low_in_both)
                low_in_both = marks[i][j];

            if (j == 0) {
                if (marks[i][j] > hi_in_mid)
                    hi_in_mid = marks[i][j];

                if (marks[i][j] < low_in_mid)
                    low_in_mid = marks[i][j];
            }
            else {
                if (marks[i][j] > hi_in_final)
                    hi_in_final = marks[i][j];

                if (marks[i][j] < low_in_final)
                    low_in_final = marks[i][j];
            }
        }
    }

    printf("\nHighest marks in mids: %d\n", hi_in_mid);
    printf("Lowest marks in mids: %d\n", low_in_mid);

    printf("Highest marks in finals: %d\n", hi_in_final);
    printf("Lowest marks in finals: %d\n", low_in_final);

    printf("Highest marks overall: %d\n", hi_in_both);
    printf("Lowest marks overall: %d\n", low_in_both);

    return 0;
}

#include <stdio.h>

int main() {
    FILE *fp;
    int choice, day;
    float hours, total, average;

    do {
        printf("\n===== Student Productivity Tracker =====\n");
        printf("1. Log Daily Study Hours\n");
        printf("2. Generate Weekly Report\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            fp = fopen("study.txt", "a");

            printf("Enter day number 1 to 7: ");
            scanf("%d", &day);

            printf("Enter study hours: ");
            scanf("%f", &hours);

            fprintf(fp, "%d %.2f\n", day, hours);
            fclose(fp);

            printf("Study hours saved successfully.\n");
        }

        else if (choice == 2) {
            fp = fopen("study.txt", "r");

            if (fp == NULL) {
                printf("No data found.\n");
            } else {
                total = 0;

                printf("\nWeekly Report:\n");

                while (fscanf(fp, "%d %f", &day, &hours) != EOF) {
                    printf("Day %d = %.2f hours\n", day, hours);
                    total = total + hours;
                }

                fclose(fp);

                average = total / 7;

                printf("\nTotal Study Hours = %.2f\n", total);
                printf("Average Study Hours = %.2f\n", average);

                if (average >= 4) {
                    printf("Excellent productivity.\n");
                } else {
                    printf("Need more study practice.\n");
                }
            }
        }

        else if (choice == 3) {
            printf("Thank you. Keep studying.\n");
        }

        else {
            printf("Invalid choice.\n");
        }

    } while (choice != 3);

    return 0;
}

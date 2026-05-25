#include <stdio.h>

int main() {
    float screen[7], total = 0, average;
    int i;

    for (i = 0; i < 7; i++) {
        printf("Enter screen time for day %d: ", i + 1);
        scanf("%f", &screen[i]);
        total = total + screen[i];
    }

    average = total / 7;

    printf("\nTotal screen time = %.2f hours\n", total);
    printf("Average screen time = %.2f hours\n", average);

    if (average > 4) {
        printf("Warning: Your screen time is high.\n");
    }
    else {
        printf("Your screen time is healthy.\n");
    }

    return 0;
}

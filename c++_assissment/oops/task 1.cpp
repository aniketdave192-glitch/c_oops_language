#include <stdio.h>

int main() {
    int hours;

    printf("Enter hours studied today: ");
    scanf("%d", &hours);

    if (hours == 0) {
        printf("Start today, even 1 hour is good.\n");
    }
    else if (hours <= 2) {
        printf("Good start, try to study more tomorrow.\n");
    }
    else if (hours <= 5) {
        printf("Great work, keep it up!\n");
    }
    else {
        printf("Excellent study today, take some rest also.\n");
    }

    return 0;
}

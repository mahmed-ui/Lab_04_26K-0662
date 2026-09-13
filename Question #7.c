#include <stdio.h>

int main() {
    float total;
    char hasStudentID;

    printf("Enter the bill total: ");
    scanf("%f", &total);

    printf("Does the customer have a student ID (Y/N)? ");
    scanf(" %c", &hasStudentID);

    if (hasStudentID == 'Y' || hasStudentID == 'y') {
        total = total - 2.00;
        printf("Student discount applied.\n");
    }

    if (total < 0) {
        total = 0.00;
        printf("Bill adjusted to avoid a negative value.\n");
    }

    printf("Final bill total: $%.2f\n", total);

    return 0;
}
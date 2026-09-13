//Question 7:
/* The program asks for the bill total and student ID status. If the customer has a student ID, it
subtracts $2.00 from the total. After this, it uses a completely separate if statement to check if
the bill is negative (regardless of whether a discount was applied) and adjusts it to $0.00 if
needed. This makes the program more robust as it protects ALL customers from negative bills,
not just students. */

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


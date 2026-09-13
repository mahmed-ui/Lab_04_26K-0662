#include <stdio.h>

int main() {
    float currentTotal;
    int crustChoice;
    float surcharge;
    float newTotal;

    printf("Enter the current total cost of the order: ");
    scanf("%f", &currentTotal);

    printf("Select crust type (1 for Regular, 2 for Thin, 3 for Stuffed): ");
    scanf("%d", &crustChoice);

    if (crustChoice == 1) {
        surcharge = 0.0;
    } else if (crustChoice == 2) {
        surcharge = 1.0;
    } else if (crustChoice == 3) {
        surcharge = 2.0;
    } else {
        printf("Invalid crust selection.\n");
        surcharge = 0.0;
    }

    if (crustChoice >= 1 && crustChoice <= 3) {
        newTotal = currentTotal + surcharge;
        printf("Updated bill total: $%.2f\n", newTotal);
    }

    return 0;
}

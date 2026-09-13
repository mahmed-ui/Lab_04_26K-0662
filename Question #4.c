//Question 4:
/* Customers can choose their crust to suit their preference. Each crust selection has a distinct
pricing addition: Regular crust costs $0, thin crust adds $1, and Stuffed crust adds $2. Write a
program that asks the cashier to enter the current total cost of the order. Then, prompt for the
crust type choice (1 for regular, 2 for Thin, 3 for Stuffed). Use conditional branches to add the
appropriate surcharge to the total and print the new updated bill total. */

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


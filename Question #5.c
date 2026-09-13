//Question 5:
/* Extra cheese is a popular option that carries a fixed preparation fee of $1.50. Write a program
that prompts the cashier for the current order total, then asks: 'Do you want extra cheese
(Y/N)?'. Check the character input. If the cashier enters 'Y' or 'y', add $1.50 to the current total
cost and print the updated total. If they enter 'N' or 'n', keep the total unchanged. Handle any
invalid characters with a polite warning. */

#include <stdio.h>

int main() {
    float currentTotal;
    char choice;
    float extraCheeseFee = 1.50;

    printf("Enter the current order total: ");
    scanf("%f", &currentTotal);

    printf("Do you want extra cheese (Y/N)? ");
    scanf(" %c", &choice);

    if (choice == 'Y' || choice == 'y') {
        currentTotal = currentTotal + extraCheeseFee;
        printf("Extra cheese added. Updated total: $%.2f\n", currentTotal);
    } else if (choice == 'N' || choice == 'n') {
        printf("No extra cheese. Total remains: $%.2f\n", currentTotal);
    } else {
        printf("Sorry, that's not a valid option. Please enter Y or N next time.\n");
    }

    return 0;
}


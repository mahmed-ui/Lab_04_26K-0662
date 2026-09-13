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

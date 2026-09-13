//Question 8:
/* The shop is running a promotional giveaway to encourage premium combos: If a customer
orders exactly 3 pizzas and selects the Stuffed Crust option, they qualify for a free side dish.
Write a C program segment that reads the number of pizzas and the crust type selection (3 for
Stuffed). If both conditions are met simultaneously using a compound logical operator, print:
'You get free garlic bread!'. Otherwise, print: 'Thank you for your order!' */

#include <stdio.h>

int main() {
    int numPizzas;
    int crustChoice;

    printf("Enter the number of pizzas: ");
    scanf("%d", &numPizzas);

    printf("Select crust type (1 for Regular, 2 for Thin, 3 for Stuffed): ");
    scanf("%d", &crustChoice);

    if (numPizzas == 3 && crustChoice == 3) {
        printf("You get free garlic bread!\n");
    } else {
        printf("Thank you for your order!\n");
    }

    return 0;
}


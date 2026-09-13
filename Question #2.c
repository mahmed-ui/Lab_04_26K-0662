//Question 2:
/*A small-sized pizza has a base price of $8. The shop owner wants to make sure cashiers are
always advising clients about deals. Write a program that prompts the cashier for the number
of pizzas the customer wants. If the customer is buying more than 1 pizza, display the
promotional reminder on the screen: 'Check our multi-pizza deals.' Otherwise, calculate the
total price directly at $8 per pizza, and output: 'Your total is $8.' */


#include <stdio.h>

int main() {
    int numPizzas;
    float basePrice = 8.0;

    printf("Enter the number of pizzas: ");
    scanf("%d", &numPizzas);

    if (numPizzas > 1) {
        printf("Check our multi-pizza deals.\n");
    } else {
        float total = numPizzas * basePrice;
        printf("Your total is $%.2f\n", total);
    }

    return 0;
}


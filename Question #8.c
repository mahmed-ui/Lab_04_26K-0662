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

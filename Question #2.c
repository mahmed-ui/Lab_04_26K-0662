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

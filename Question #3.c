#include <stdio.h>

int main() {
    int quantity;
    float total;

    printf("Enter the desired pizza quantity (1, 2, or 3): ");
    scanf("%d", &quantity);

    if (quantity == 1) {
        total = 8.0;
        printf("Quantity: %d pizza(s), Total: $%.2f\n", quantity, total);
    } else if (quantity == 2) {
        total = 15.0;
        printf("Quantity: %d pizza(s), Total: $%.2f\n", quantity, total);
    } else if (quantity == 3) {
        total = 21.0;
        printf("Quantity: %d pizza(s), Total: $%.2f\n", quantity, total);
    } else {
        printf("Invalid quantity.\n");
    }

    return 0;
}


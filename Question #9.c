#include <stdio.h>

int main() {
    float orderTotal;
    int fulfillmentOption;
    float finalTotal;

    printf("Enter the order total: ");
    scanf("%f", &orderTotal);

    printf("Fulfillment Option (1. Pickup, 2. Delivery): ");
    scanf("%d", &fulfillmentOption);

    if (fulfillmentOption == 2) {
        finalTotal = orderTotal + 3.00;
    } else if (fulfillmentOption == 1) {
        finalTotal = orderTotal + 0.00;
    } else {
        printf("Invalid fulfillment option.\n");
        finalTotal = orderTotal;
    }

    if (fulfillmentOption == 1 || fulfillmentOption == 2) {
        printf("Final total cost of the order: $%.2f\n", finalTotal);
    }

    return 0;
}


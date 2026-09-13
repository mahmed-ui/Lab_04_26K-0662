#include <stdio.h>

int main() {
    float currentTotal;
    int hour;

    printf("Enter the current total bill: ");
    scanf("%f", &currentTotal);

    printf("Enter the current hour (0-23): ");
    scanf("%d", &hour);

    if (hour >= 11 && hour <= 14) {
        float discountedTotal = currentTotal - (currentTotal * 0.10);
        printf("Lunch-hour promo applied! Discounted total: $%.2f\n", discountedTotal);
    } else {
        printf("No discount available. Total: $%.2f\n", currentTotal);
    }

    return 0;
}

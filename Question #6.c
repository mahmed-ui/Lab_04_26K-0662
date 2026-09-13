//Question 6:
/* To drive traffic during the slow lunch-hour dip, the shop offers a special 10% discount between
11:00 AM and 2:00 PM (11 to 14 in 24-hour time). Write a program that reads the current total
bill and the current time of day as an integer hour (0-23). Using logical comparisons, check if the
hour falls within the promo window [11, 14] inclusive. If it is, deduct 10% from the total and
print the discounted total. If not, print the original bill with no discounts. */

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


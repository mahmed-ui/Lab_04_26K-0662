//Question 10:
/* Integrate all the rules from Questions 1 to 9 into a single complete C program. The program
must sequentially:
 1. Input and validate the pizza size and count.
 2. Apply the dynamic base pricing discount package.
 3. Request crust type and cheese choice, adding relevant fees.
 4. Prompt for the current hour and apply the 10% Happy Hour discount if appropriate.
 5. Deduct the $2 student discount if they present an ID.
 6. Evaluate the free garlic bread bonus eligibility.
 7. Add delivery fees if chosen.
 8. Print a beautifully clean, structured invoice with itemized charges and the final total cost. */
 
#include <stdio.h>

int main() {
    // ---- Variables Declaration----
    int size, quantity, crustChoice, hour, fulfillmentOption;
    char cheeseChoice, studentID;
    float basePrice = 0, crustSurcharge = 0, cheeseFee = 0;
    float happyHourDiscount = 0, studentDiscount = 0, deliveryFee = 0;
    float subtotal, finalTotal;
    int freeGarlicBread = 0;

    // ---- Step 1: Size selection ----
    printf("Select size (1 = Small, 2 = Medium, 3 = Large): ");
    scanf("%d", &size);
    if (size != 1 && size != 2 && size != 3) {
        printf("Invalid size.\n");
        return 0;
    }

    // ---- Step 2: Quantity + dynamic base pricing package ----
    printf("Enter number of pizzas (1, 2, or 3): ");
    scanf("%d", &quantity);
    if (quantity == 1) {
        basePrice = 8.00;
    } else if (quantity == 2) {
        basePrice = 15.00;
    } else if (quantity == 3) {
        basePrice = 21.00;
    } else {
        printf("Invalid quantity.\n");
        return 0;
    }

    // ---- Step 3: Crust type + cheese choice ----
    printf("Select crust type (1 = Regular, 2 = Thin, 3 = Stuffed): ");
    scanf("%d", &crustChoice);
    if (crustChoice == 1) {
        crustSurcharge = 0.00;
    } else if (crustChoice == 2) {
        crustSurcharge = 1.00;
    } else if (crustChoice == 3) {
        crustSurcharge = 2.00;
    } else {
        printf("Invalid crust selection.\n");
        return 0;
    }

    printf("Do you want extra cheese (Y/N)? ");
    scanf(" %c", &cheeseChoice);
    if (cheeseChoice == 'Y' || cheeseChoice == 'y') {
        cheeseFee = 1.50;
    } else if (cheeseChoice == 'N' || cheeseChoice == 'n') {
        cheeseFee = 0.00;
    } else {
        printf("Sorry, that's not a valid option. No cheese fee applied.\n");
        cheeseFee = 0.00;
    }

    // ---- Step 4: Happy Hour discount ----
    printf("Enter the current hour (0-23): ");
    scanf("%d", &hour);
    subtotal = basePrice + crustSurcharge + cheeseFee;
    if (hour >= 11 && hour <= 14) {
        happyHourDiscount = subtotal * 0.10;
    }

    // ---- Step 5: Student discount ----
    printf("Does the customer have a student ID (Y/N)? ");
    scanf(" %c", &studentID);
    if (studentID == 'Y' || studentID == 'y') {
        studentDiscount = 2.00;
    } else if (studentID != 'N' && studentID != 'n') {
        printf("Sorry, that's not a valid option. No student discount applied.\n");
    }

    // ---- Step 6: Free garlic bread bonus check ----
    if (quantity == 3 && crustChoice == 3) {
        freeGarlicBread = 1;
    }

    // ---- Step 7: Delivery fee ----
    printf("Fulfillment Option (1 = Pickup, 2 = Delivery): ");
    scanf("%d", &fulfillmentOption);
    if (fulfillmentOption == 2) {
        deliveryFee = 3.00;
    } else if (fulfillmentOption != 1) {
        printf("Invalid fulfillment option.\n");
        return 0;
    }

    // ---- Final total (with negative-bill safeguard, from Q7) ----
    finalTotal = subtotal - happyHourDiscount - studentDiscount + deliveryFee;
    if (finalTotal < 0) {
        finalTotal = 0.00;
    }

    // ---- Step 8: Itemized invoice ----
    printf("\n===== SLICE & DICE PALACE - INVOICE =====\n");
    printf("%-30s $%6.2f\n", "Base Price:", basePrice);
    printf("%-30s $%6.2f\n", "Crust Surcharge:", crustSurcharge);
    printf("%-30s $%6.2f\n", "Extra Cheese Fee:", cheeseFee);
    printf("%-30s -$%5.2f\n", "Happy Hour Discount:", happyHourDiscount);
    printf("%-30s -$%5.2f\n", "Student Discount:", studentDiscount);
    printf("%-30s $%6.2f\n", "Delivery Fee:", deliveryFee);
    if (freeGarlicBread == 1) {
        printf("Bonus: You get free garlic bread!\n");
    }
    printf("------------------------------------------\n");
    printf("%-30s $%6.2f\n", "FINAL TOTAL:", finalTotal);
    printf("===========================================\n");

    return 0;
}

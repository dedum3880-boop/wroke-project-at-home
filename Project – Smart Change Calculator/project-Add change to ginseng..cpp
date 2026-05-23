#include <stdio.h>

int main() {
    // 1. Declare variables to store data
    int price = 0;       // Product price
    int cash = 0;        // Money given by customer
    int change = 0;      // Change to give back

    printf("=== Welcome to Cashier System 1.0 ===\n");

    // 2. Input product price from keyboard
    printf("Enter product price (Baht): ");
    scanf("%d", &price);

    // 3. Input cash from customer
    printf("Enter cash received (Baht): ");
    scanf("%d", &cash);

    // 4. [Challenge] Calculate the change 
    // Equation: Change must be equal to Cash minus Price
    change = cash-price ; 

    // 5. Display the result
    printf("----------------------------------------\n");
    printf("Change to give customer: %d Baht\n", change);
    printf("========================================\n");

    return 0;
}

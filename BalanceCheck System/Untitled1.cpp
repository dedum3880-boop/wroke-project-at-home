#include <stdio.h>

int main() {
    int price = 0;       
    int cash = 0;        
    int change = 0;      

    printf("=== Welcome to Cashier System 1.1 ===\n");

    printf("Enter product price (Baht): ");
    scanf("%d", &price);

    printf("Enter cash received (Baht): ");
    scanf("%d", &cash);

    // [Challenge Part] 
    if ( cash >= price ) {
        
        change = cash - price;
        printf("Change to give customer: %d Baht\n", change);
        
    } else { 
        
        printf("Error: Not enough cash! Customer needs to pay more.\n");
        
    }

    printf("========================================\n");
    return 0;
}

#include <stdio.h>

int main() {
    int price = 0;       
    int total_price = 0; 
    int cash = 0;        
    int change = 0;      

    printf("=== Welcome to Multi-Item Cashier System 1.3 ===\n");

    while (1) {
        printf("\n--- Scanning Items ---\n");
        printf("Enter product price [Or enter 0 to Finish scanning]: ");
        scanf("%d", &price);

        if ( price == 0 ) {
            break; 
        }

        total_price = total_price + price ; 
        
        printf("Current Total: %d Baht\n", total_price);
    } 

    printf("\n========================================\n");
    printf("Total Amount to Pay: %d Baht\n", total_price);
    printf("========================================\n");

    printf("Enter cash received (Baht): ");
    scanf("%d", &cash);

    if ( cash > total_price ) {
        
        change = cash - total_price ;
        printf("Change to give customer: %d Baht\n", change);
        
    } else {
        printf("Error: Not enough cash!\n");
    }

    printf("========================================\n");
    return 0;
}

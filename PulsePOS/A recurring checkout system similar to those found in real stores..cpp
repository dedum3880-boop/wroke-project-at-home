#include <stdio.h>

int main() {
    int price = 0;       
    int cash = 0;        
    int change = 0;      

    printf("=== Welcome to Enterprise Cashier System 1.2 ===\n");

    while (1) {
        
        printf("\n--- New Customer ---\n");
        printf("Enter product price (Baht) [Or enter 0 to Exit]: ");
        scanf("%d", &price);

        if ( price == 0 ) {
            printf("Closing system... Thank you!\n");
            break ; 
        }

        printf("Enter cash received (Baht): ");
        scanf("%d", &cash);

        if ( cash >= price ) {
            
            change = cash - price;
            printf("Change to give customer: %d Baht\n", change);
            
        } else {
            printf("Error: Not enough cash! Customer needs to pay more.\n");
        }
        
    } 

    printf("========================================\n");
    return 0;
}

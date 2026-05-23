#include <stdio.h>

int main() {
    int price = 0;       
    int total_price = 0; 
    int is_vip = 0;      
    float final_amount = 0.0; 
    int cash = 0;        
    float change = 0.0;      

    printf("=== Welcome to VIP Cashier System 1.4 ===\n");

    while (1) {
        printf("Enter product price [Or enter 0 to Finish]: ");
        scanf("%d", &price);

        if ( price == 0 ) {
            break; 
        }
        total_price = total_price + price; 
        printf("Current Total: %d Baht\n", total_price);
    } 

    printf("\nGross Total: %d Baht\n", total_price);
    printf("----------------------------------------\n");

    printf("Is this customer a VIP member? [1 = Yes, 0 = No]: ");
    scanf("%d", &is_vip);

    if ( is_vip == 1 ) {

        final_amount = total_price * 0.9;
        printf("VIP Discount 10%% Applied!\n");
    } else {
        
        final_amount = total_price ; 
    }

    printf("Final Amount to Pay: %.2f Baht\n", final_amount);
    printf("========================================\n");

    printf("Enter cash received (Baht): ");
    scanf("%d", &cash);

    if ( cash >= final_amount ) {
        
        change = cash - final_amount ;
        printf("Change to give customer: %.2f Baht\n", change);
        
    } else {
        printf("Error: Not enough cash!\n");
    }

    printf("========================================\n");
    return 0;
}

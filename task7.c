#include <stdio.h>

int main() {
    char name[50];
    float price = 0.0;
    float total_bill = 0.0;
    int choice = 0;
    int orders=0;

    do {
        
        printf("enter name of Food: ");
        
        scanf("%s", name);

        printf("Enter the price of %s: ", name);
        scanf("%f", &price);
        
        total_bill += price;
        orders++;
        
        printf("do you want to order another item? 1 for Yes, 0 for No: ");
        scanf("%d", &choice);
        printf("\n");


    } while (choice == 1);

    

    printf("        ORDER SUMMARY          \n");
    printf("total items ordered: %d\n", orders);
    printf("total bill amount:   %.2f\n", total_bill);

    return 0;
}
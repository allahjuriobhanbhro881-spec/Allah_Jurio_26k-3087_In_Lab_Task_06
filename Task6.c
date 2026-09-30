#include <stdio.h>

int main(){
    
    int amount;
    int total_saving = 0, deposits = -1;
    do{
        printf("enter amount to save: ");
        scanf("%d", &amount);
        total_saving = total_saving + amount;
        deposits++;
    }while(amount>0);
    
    printf("\nTotal saving: %d", total_saving);
    printf("\nnumber of deposits: %d", deposits);
    return 0;
}
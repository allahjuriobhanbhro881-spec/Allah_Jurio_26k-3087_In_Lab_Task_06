#include <stdio.h>

int main(){
    
    int temp[7], total = 0, counter = 0;

    for(int i=0;i<7;i++){
        printf("Enter temperature: ");
        scanf("%d", &temp[i]);
        total = total + temp[i];
        if(temp[i]>100){
            counter++;
        }
    }

    printf("\ntotal temperature: %d\n", total);
    printf("no. of temperature greater than 100: %d", counter);


    return 0;
}
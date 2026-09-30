#include <stdio.h>

int main(){
    
    int n;

    while(n!=0){
        printf("enter a number: ");
        scanf("%d", &n);
        printf("cube: %d\n",n*n*n);
    }

    return 0;
}
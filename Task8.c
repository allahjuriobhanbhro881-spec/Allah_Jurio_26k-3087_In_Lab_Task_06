#include <stdio.h>
#include <string.h>

int main(){
    
    int salary[6],count=0;

    for(int i=0;i<6;i++){
        printf("Enter salary: ");
        scanf("%d", &salary[i]);
    }

    for(int i=0;i<6;i++){
        printf(" %d", salary[i]);
        if(salary[i]>50000){
           count++;
        }
    }
    
    printf("\n%d", count);

    return 0;
}
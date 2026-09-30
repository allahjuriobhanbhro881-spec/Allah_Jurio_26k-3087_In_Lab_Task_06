#include <stdio.h>

int main(){
    
    int marks;
    int all_marks[50];
    int i=0,j;
    do{
      printf("enter marks: ");
      scanf("%d", &marks);
      all_marks[i] = marks;
      printf("1 for yes, 0 for no: ");
      scanf("%d", &j);
      i++;
    }while(j==1);
   
    int total_students = i;
    
    printf("\nTotal students: %d\n", total_students);
    for(int k=0;k<i;k++){
        printf(" %d ", all_marks[k]);
    }

    return 0;
}
#include <stdio.h>

int main(){
    int marks[5];
    printf("Enter marks of five students: \n");
    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks at index %d is %d\n", i, marks[i]);
    }
    
    // printf("Marks 0 and marks 1 is %d and %d\n", marks[0], marks[1]);
    return 0;
}
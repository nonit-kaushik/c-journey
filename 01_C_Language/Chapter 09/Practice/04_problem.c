#include <stdio.h>

typedef struct employee{
    int salary;
    float score;
} emp;

int main(){
    emp e1;

    emp* ptr = &e1;
    // (*ptr).salary = 56;
    ptr-> salary = 56;
    ptr-> score = 45.3;

    printf("The value of salary and score are %d and %f", ptr->salary, ptr->score);
    return 0;
}
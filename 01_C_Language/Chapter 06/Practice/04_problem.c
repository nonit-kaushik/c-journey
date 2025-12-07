#include <stdio.h>
void change(int*);
void change(int* n){
    *n = 1857;
}

int main(){
    int a = 5;
    printf("The value of a is %d\n", a);
    change(&a);
    printf("The value of a is %d\n", a);
    return 0;
}
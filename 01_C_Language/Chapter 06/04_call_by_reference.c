#include <stdio.h>

int sum(int* , int*);
int sum(int* x, int* y){
    *x = 5;
    return *x + *y;
}
int main(){
    int a = 1, b = 6;
    printf("The sum of 1 and 6 is %d\n", sum(&a, &b)); // value of sum is changed
    printf("The value of a is %d", a);                 // value of a is also changed when its addressed is passed through a function
    return 0;
}
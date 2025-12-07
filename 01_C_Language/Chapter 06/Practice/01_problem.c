// WAP to print address of a variable. Use this address to get the value of the variable.
#include <stdio.h>

int main(){
    int i = 56;
    int* j = &i;
    printf("The address of i is %p\n", j);
    printf("The value of i is %d\n", *j);

    return 0;
}
#include <stdio.h>

int main(){
    int a = 5;
    int *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a and value of ptr is %u\n", ptr);
    ptr++;          // increment by 4 = size of int datatype
    printf("The value of ptr is %u\n", ptr);
    
    // char b = 'T';
    // char *p = &b;
    // printf("The address of b is %u\n", &b);
    // printf("The address of b and value of p is %u\n", p);
    // p++;            // Increment by 1 = size of char datatype
    // printf("The value of p is %u", p);

    return 0;
}
#include <stdio.h>

int main(){
    int i = 2;
    int* j = &i;  // j is pointer, pointing to i
    printf("The address of i is %p\n", j); // hexadecimal address in character, correct 
    printf("The address of i is %p\n", &i); 
    printf("The address of j is %u\n", &j); 
    printf("The address of i is %u\n", j); // unsigned int, just to see increment decrement in address in arrays
    
    printf("The value at address j is %d\n", *j);
    printf("The value at address j is %d\n", *(&i));
    return 0;
}
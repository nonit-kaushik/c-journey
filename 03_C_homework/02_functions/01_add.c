#include <stdio.h>

// Function prototype
int sum(int,int);

// function definition
int sum(int a, int b){                 // a and b are parameters
    printf("The sum is %d\n",a+b);
    return a+b;
}

int main(){
    sum(8,5); // function calling     // 8 and 5 are arguments
    printf("\n%d",sum(4,4)); // function call and prints the return value of function
    return 0;
}

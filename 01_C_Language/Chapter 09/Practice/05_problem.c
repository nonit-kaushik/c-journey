#include <stdio.h>

typedef struct complexlex_Number{
    int real;
    int imaginary;
} complex;

complex complexsum(complex , complex);
complex complexsum(complex a, complex b ){
    complex c3;
    c3.real = a.real + b.real;
    c3.imaginary = a.imaginary + b.imaginary;
    return c3;
}

void complexprint(complex);
void complexprint(complex c){
    printf("%d + %di\n", c.real , c.imaginary);
}

int main(){
    complex c1 = {2,1}, c2 = {3,4}, c_sum;
    printf("c1 = ");
    complexprint(c1);
    printf("c2 = ");
    complexprint(c2);
    c_sum = complexsum(c1,c2);
    printf("c1 + c2 = ");
    complexprint(c_sum);
    return 0;
}
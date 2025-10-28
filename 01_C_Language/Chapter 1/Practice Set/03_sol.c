#include <stdio.h>

int main(){

    float fahrenheit, celsius;
    printf("Enter temprature in celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius*9.0/5.0)+32;
    printf("%f celsius is equal to %f fahrenheit", celsius, fahrenheit);
    return 0;
}
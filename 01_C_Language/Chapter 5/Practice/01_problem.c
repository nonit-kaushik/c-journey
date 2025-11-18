#include <stdio.h>

float average(float a, float b, float c);
float average(float a, float b, float c){

    return (a + b + c)/3;
}
int main(){
    float a,  b, c;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("%.3f", average(a,b,c));
    return 0;
}
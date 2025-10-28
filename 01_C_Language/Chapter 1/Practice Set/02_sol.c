#include <stdio.h>

int main(){

    float radius, height, area, volume;
    printf("Enter Radius: ");
    scanf("%f",&radius);
    printf("Enter Height: ");
    scanf("%f",&height);
    area = 3.14*radius*radius;
    volume = area*height;

    printf("Area of the circle is %f\n",area);
    printf("Volume of the cylinder is %f sqr unit.", volume);

    return 0;
}
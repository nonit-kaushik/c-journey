#include <stdio.h>
float cir_area(float);
float cir_area(float radius){
    float area = radius*3.14*radius;
    return area;
}
float clndr_vol(float, float);
float clndr_vol(float radius, float height){
    float volume = 3.14*radius*radius*height;
    return volume;
}
int main(){
    float cir_radius, clndr_rad, clndr_height;
    // printf("Enter the radius of circle: ");
    // scanf("%f",&cir_radius);
    // printf("Area of the circle is %.2f sqr units.\n",cir_area(cir_radius));
    printf("Enter the radius and height of cylinder: ");
    scanf("%f %f", &clndr_rad, &clndr_height);
    printf("Volmue of the Cylinder is %.2f cubic units.\n",clndr_vol(clndr_rad, clndr_height));
    return 0;
}
#include <stdio.h>
float clndr_vol(float, float);
float clndr_vol(float radius, float height){
    float volume = 3.14*radius*radius*height;
    return volume;
}
int main(){
    float clndr_rad, clndr_height;
    printf("Enter the radius and height of cylinder: ");
    scanf("%f %f", &clndr_rad, &clndr_height);
    printf("Volmue of the Cylinder is %.2f cubic units.\n",clndr_vol(clndr_rad, clndr_height));
    return 0;
}
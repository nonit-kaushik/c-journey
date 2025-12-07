#include <stdio.h>

float weight(float mass);
float weight(float mass){
	return mass*9.8;
}

int main(){
	float mass;
	printf("Enter the value of mass: ");
	scanf("%f",&mass);
	printf("The Weight of the body is %.2fkg\n",weight(mass));
	return 0;
}

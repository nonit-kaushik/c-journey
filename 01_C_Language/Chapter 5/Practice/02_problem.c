#include <stdio.h>

float c2f(float celcius);
float c2f(float celcius){
	return ((9*celcius)/5)+32;
}

int main(){
	float celcius;
	printf("Enter the temprature in celcius: ");
	scanf("%f",&celcius);
	printf("The temprature in farenhite is %.3f",c2f(celcius));
	return 0;
}

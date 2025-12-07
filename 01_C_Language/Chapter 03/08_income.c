#include <stdio.h>

int main(){
    float income;
    float tax = 0, temp = 0;
    printf("Enter Your Income: ");
    scanf("%f",&income);
    if(income <= 250000){
        tax = 0;
    }

    else if ( income>250000 && income <= 500000){
        temp = income - 250000;
	    tax = (temp)*5/100;
    }

    else if ( income > 500000 && income <= 1000000){
        temp = income - 500000;
	    tax = (250000)*5/100 + temp*20/100;
    }

    else{
        temp = income - 1000000;
        tax =  (250000)*5/100 + 500000*20/100 + temp*30/100;
    }

    printf("The tax is %f",tax);
    return 0;
}

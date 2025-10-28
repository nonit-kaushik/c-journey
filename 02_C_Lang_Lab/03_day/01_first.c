// WAP to check whether the entered number is +ve or -ve
#include<stdio.h>

int main(){

    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    if (a > 0){
        printf("The number is positive");
    }
    else{
        printf("The number is negative");
    }
    return 0;
}


#include<stdio.h>

int main(){

    int i=1, num, fact=1;
    printf("Enter the value of n: ");
    scanf("%d",&num);
    if (num == 0)
    {
        printf("Factorial of 0 is 1");
    }
    else{
        while (i<=num){
            fact = fact*i;
            i++;
        }
        printf("Factorial is %d",fact);
    }

    return 0;
}
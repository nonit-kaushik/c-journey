#include<stdio.h>

void main(){
    /* 
    p denotes principle amount
    r denotes rate of interest
    t denotes time period
    */
    int p, r, t;
    printf("Enter the value of principle amount: ");
    scanf("%d",&p);
    printf("Enter the value of rate of interest: ");
    scanf("%d",&r);
    printf("Enter the time period: ");
    scanf("%d",&t);
    float simple_interest;
    simple_interest = (p*r*t)/100;
    printf("Simple Interest = %f",simple_interest);

}
    
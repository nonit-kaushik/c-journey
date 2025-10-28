// WAP a program to print sum of digits of a number
#include<stdio.h>

int main(){

    int num, r, sum=0;
    printf("enter the value of num: ");
    scanf("%d" ,&num);
    while (num>=1){
        r = num%10;
        sum = sum + r;
        num = num/10;
    }
    printf("Sum of the digits is %d", sum);

    return 0;
}
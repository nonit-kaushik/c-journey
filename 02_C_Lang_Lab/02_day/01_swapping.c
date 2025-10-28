// WAP to swap two numbers using 3rd variable
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Before Swapping:\nThe value of a and b are %d and %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping:\nThe value of a and b are %d and %d",a,b);
    return 0;
}
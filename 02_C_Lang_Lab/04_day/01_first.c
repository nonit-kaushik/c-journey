// WAP to find sum of first n numbers
#include<stdio.h>

int main(){

    int i, n, sum =0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (i=1; i<=n;i++){
        sum = sum+i;
    }
    printf("The sum is %d",sum);
    return 0;
}
// WAP to check whether a number is prime or not

#include <stdio.h>

void main(){
    int num, i, flag = 0;
    printf("Enter the no. to be checked: ");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if (num%i==0){
            flag=1;
            break;
        }
    }
    if (flag==1){
    printf("The number is composite");
    }
    else{
        printf("The number is Prime.");
    }
}
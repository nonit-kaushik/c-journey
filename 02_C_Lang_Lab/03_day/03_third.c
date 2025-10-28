// WAP to check whether you are eligible for vote or not
 
#include<stdio.h>

int main(){

    int a;
    printf("Enter your age: ");
    scanf("%d",&a);
    if ((a>18)||(a==18)){
        printf("You are eligible to vote");
    }

    else{
        printf("You are not eligible to vote");
    }

    return 0;
}
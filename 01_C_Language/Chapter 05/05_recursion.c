#include <stdio.h>

int factorial(int x);
int factorial(int x){
    if (x<0)
    {
        printf("Enter a Positive Number!");
        return 0;
    }
    else if (x==0||x==1)
    {
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("%d! = %d\n", num, factorial(num));
    return 0;
}
#include <stdio.h>
int nsum(int);
int nsum(int x){
    if (x==0){
        return 0;
    }
    return x+nsum(x-1);
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if(n<0){
        printf("Enter a positive number\n");
        main();
    }
    int sum = nsum(n);
    printf("Sum of first %d natural number is %d\n", n, sum);
    return 0;
}
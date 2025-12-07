#include <stdio.h>
int square(int);
int square(int x){
    return x*x;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("%d\n",square(num));
    return 0;
}
#include <stdio.h>
void swap(int *, int *);
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    swap(&a,&b);
    printf("%d %d\n", a, b);
    return 0;
}
#include <stdio.h>
void swap(int* , int*);
void swap(int* a, int* b){
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 4, b = 6;
    printf("Value of a and b before swapping is %d and %d\n",a,b);
    swap(&a,&b);
    printf("Value of a and b after swapping is %d and %d\n",a,b);
    return 0;
}
#include <stdio.h>

int* sum(int a, int b){ 
    int s = a+b;
    int* ptr = &s;
    printf("The sum is %d\n",s);
    // return &s; // Comiler will give warning
    return ptr;   // But still it will make no sense to return address of a local variable
                  // because value of any variabel local to a function destroy after function returns
}

float* average(int a, int b){
    float avg = (a+b)/2.0;
    float* ptr = &avg;
    printf("The average is %f\n",avg);   // same in this case
    return ptr;    // Dangling pointer
}

int main(){
    int x = 2, y = 4;
    sum(x,y);
    average(x,y);
    printf("The address of sum and average is %u and %u", sum, average);
    return 0;
}
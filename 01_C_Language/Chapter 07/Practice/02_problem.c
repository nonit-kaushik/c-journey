#include <stdio.h>

int main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5*(i+1);
    }
    
    printf("Table of 5 :\n");

    for (int i = 0; i < 10; i++)
    {
        printf("5 X %d = %d\n", i+1, arr[i]);
    }
    
    return 0;
}
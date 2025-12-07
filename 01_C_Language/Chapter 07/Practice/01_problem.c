#include <stdio.h>

int main(){
    int arr[10] = {12, 23, 54, 86, 94, 47, 65, 18, 98, 74};
    int* ptr = arr;
if (*(ptr+2) == arr[2])
    {
        printf("Verified!");
    }
    else{
        printf("Logic is wrong!");
    }
    
    return 0;
}
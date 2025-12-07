// Passing an array to function and returning an array from function and accessing elements of array with pointer
#include <stdio.h>
int* tenX(int*);
int* tenX(int* ptr){
    for (int i = 0; i < 5; i++)
    {
        *ptr = *ptr*10;
        ptr++;   // moving pointer ahead of array
    }
    return ptr; // when it return ptr the above incrementation in ptr reached last index of array + 4 bytes 
}
int main(){
    int arr[5] = {1, 4, 5, 78, 5};
    // int* p = tenX(arr);   // here that last element + 4 byte memeory location is stored in p so it will out of range of index of array
    int* p = arr;
    tenX(p);
    for (int i = 0; i < 5; i++)
    {
        printf("The value at index %d is %d\n",i, *p);
        p++;
    }
    
    return 0;
}


// Passing array in function and returning array from a function witout accessing value of array using pointer

// #include <stdio.h>
// int* tenX(int*);
// int* tenX(int* ptr){
//     for (int i = 0; i < 5; i++)
//     {
//         ptr[i] = ptr[i]*10;
//     }
//     return ptr;
// }


// int main(){
//     int arr[5] = {1, 4, 5, 78, 5};
//     tenX(arr);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("The value at index %d is %d\n",i , arr[i]);
//         // printf("The value at index %d is %d\n",i, *p);
//         // p++;
//     }

//     return 0;
// }


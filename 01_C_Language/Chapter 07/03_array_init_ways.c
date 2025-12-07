#include <stdio.h>

int main(){
    int cgpa[3] = {3, 9 , 8};
    for (int i = 0; i < 3; i++)
    {
        printf("The value at index %d is %d\n", i, cgpa[i]);
    }
    int marks[] = {4, 5, 6}; // it will calculate size by itself
    return 0;
}
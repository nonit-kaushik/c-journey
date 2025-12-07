#include <stdio.h>

int main(){
    int marks[5]; // reserve space to store 5 integers
    
    marks[0] = 45;
    marks[1] = 54;
    marks[2] = 76;
    marks[3] = 34;
    marks[4] = 32;
    // marks[5] is invalid because index of array is from 0 to n-1; where n is size of array

    printf("Marks 0 and marks 1 is %d and %d\n",marks[0], marks[1]);
    return 0;
}
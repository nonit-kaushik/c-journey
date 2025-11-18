// Wap a program to find area of a square using a library function
#include <stdio.h>
#include <math.h>
int main(){
    int side;
    printf("Enter the side of square: ");
    scanf("%d",&side);
    printf("The area of square is %.2f unit sqr\n", pow(side,2));
    return 0;
}
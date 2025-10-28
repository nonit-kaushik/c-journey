#include <stdio.h>

int main()
{
    int a = 1 , b = 0; // 1 deontes true and 0 denotes flase
    printf("The value of a and b is %d\n", a&&b); // and operator 
    printf("The value of a or b is %d\n", a||b); // or operator
    printf("The value of not of a is %d\n",!a); // not operator
    printf("The value of not of b is %d\n",!b);

    // if(a&&b){
    //     printf("Both are True");
    // }                                        using logical operator


    // if(a){
    //     if(b){
    //         printf("Both are True");
    //     }
    // }                                        using nested if
    return 0;
}
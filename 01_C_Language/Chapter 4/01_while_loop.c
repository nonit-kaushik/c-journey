// WAP to print Happy Birthday 1 lakh time

#include <stdio.h>

int main()
{
    int i = 0;

    while(i<=100000){                            // while(condition is true){                  //loop condition check here
        printf("Happy Brithday!\n");             //     code which has to be repeated;         //loop start 
        i++;                                     //     increment in iter;
    }                                            // }                                          //loop ends here

    printf("Printed\n");
    return 0;
}
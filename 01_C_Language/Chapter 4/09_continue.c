#include <stdio.h>

int main(){
    for (int i = 1; i < 15; i++)
    {
        // printf("The value of i is %d\n",i); // skip nothing
        if (i == 5){
            continue;
        }
        printf("The value of i is %d\n",i); // skip 5
    }
    return 0;
}
#include <stdio.h>

int main(){
    for (int i = 0; i < 15; i++)
    {
        printf("The value of i is %d\n",i); // print till i = 5
        if (i == 5){
            break;
        }
        printf("The value of i is %d\n",i); // print till i = 4
    }
    
    return 0;
}
#include <stdio.h>

int main(){
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n';       // represent a new line
    printf("Hey I am good \n nice");

    // but if we actually want to write \n 
    printf("Hey i am good \\n nice");

    // for space we use \t  ---> tab

    printf("Hey i am good \t nice");
}
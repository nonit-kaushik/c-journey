// Print address of a variable in main function and printing its value in user defined function in which its address is passed
#include <stdio.h>
void address(char);
void address(char m){
    printf("The address of i is %p\n", m);
}
int main(){
    char i = 'N';
    char* j = &i;
    printf("The address of i is %p\n", j);
    address(i);
    return 0;
}
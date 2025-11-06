#include <stdio.h>
void sum(int x, int y);
void sum(int x, int y){
    printf("The sum is %d\n",x+y);
}

void change(int x);
void change(int x){              // function change take int value as an argument which can't be change ie. 8 can't be changed to 4.
    x = 4;                       // But it seems that it take variable as an argument and change the value of variable.
}                                // an function can't modify value stored in any variable but it can perform operation on that variable. 

int Change(int x);
int Change(int x){
    return 22;
}

int main(){
    int a = 8;
    change(a);
    printf("The value of a is: %d\n",a);             // Printing value inside the variable a
    printf("The value of a is: %d\n",Change(a));     // Printing return value of the function Change
    return 0;
}
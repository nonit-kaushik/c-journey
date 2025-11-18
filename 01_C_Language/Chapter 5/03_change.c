#include <stdio.h>
void sum(int x, int y);
void sum(int x, int y){
    printf("The sum is %d\n",x+y);
}

void change(int a);              // function change take int value as an argument which can't be change ie. 8 can't be changed to 4.
void change(int a){              // It just make copy of variable a.
    a = 4;                       // But it seems that it take variable as an argument and change the value of variable.
}                                // function can only modify or change the value of an variable using pointers. 

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
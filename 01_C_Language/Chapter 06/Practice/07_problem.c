#include <stdio.h>

void tenX(int);
void tenX(int x){   // generates copy of a
    x = x*10;      // changes value of copy of a
}
int main(){
    int a = 45;
    printf("The value of a is %d\n", a);
    tenX(a);                          // value of a remian same
    printf("The value of a is %d", a);
    return 0;
}
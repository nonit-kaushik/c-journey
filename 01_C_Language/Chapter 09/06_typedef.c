#include <stdio.h>

typedef struct Complex{
    int real;
    int img;
} comp;

int main(){

    // typedef int jai;
    // jai a = 4;
    // jai b = 5;
    // printf("%d\n",a+b);

    // struct Complex x, y;
    // typedef struct Complex comp; //also valid
    comp x , y;        //  it is comparetively easy to use a smaller key word (like int float, here - comp) 
    x.real = 4;
    x.img = 5;
    printf("x = %d + %di\n",x.real,x.img);
    y.real = 7;
    y.img = 3;
    printf("y = %d + %di\n",y.real,y.img);

    return 0;
}
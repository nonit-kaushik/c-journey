// Create a two dimensionla vector using structure

#include <stdio.h>

struct vector{
    int x;
    int y;
};

int main(){
    struct vector v1,v2;
    v1.x = 2;
    v1.y = 1;
    printf("v1 = %di + %dj\n",v1.x,v1.y);

    v2.x = 3;
    v2.y = 4;
    printf("v2 = %di + %dj\n",v2.x,v2.y);
    return 0;
}
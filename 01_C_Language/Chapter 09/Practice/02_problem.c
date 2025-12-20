// Calculate sum of two vector and display it

#include <stdio.h>

typedef struct vector{
    int x;
    int y;
} vec;

vec vecsum(vec , vec);
vec vecsum(vec a, vec b ){
    vec c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    return c;
}

void vecprint(vec);
void vecprint(vec v){
    printf("%di + %dj\n", v.x , v.y);
}

int main(){
    vec v1 , v2 , v_sum;
    v1.x = 2;
    v1.y = 1;
    printf("v1 = %di + %dj\n",v1.x,v1.y);

    v2.x = 3;
    v2.y = 4;
    printf("v2 = %di + %dj\n",v2.x,v2.y);

    v_sum = vecsum(v1,v2);
    printf("v1 + v2 = ");
    vecprint(v_sum);
    return 0;
}

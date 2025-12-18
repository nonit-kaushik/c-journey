#include <stdio.h>
#include <string.h>

struct employee{
    int id;
    float salary;
    char name[20];

};

int main(){
    struct employee e1, e2;
    e1.id = 4;
    e2.id = 5;
    struct employee *ptr;
    ptr = &e1;
    // now we can print structure elements using: 
    printf("%d\n",(*ptr).id);
    printf("%d\n", ptr->id);
    ptr = &e2;
    printf("%d\n",(*ptr).id);
    printf("%d\n", ptr->id);

    return 0;
}
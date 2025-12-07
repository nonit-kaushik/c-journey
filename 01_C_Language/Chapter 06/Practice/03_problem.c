// WAP to change value of a variable to ten times of its value
#include <stdio.h>
int tenX(int*);
int tenX(int* n){
    return (*n)*10;
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("The value of a is %d\n",tenX(&a));
    return 0;
}

/*

#include <stdio.h>

int main(){
    int a = 5;
    printf("The value of a is %d\n", a);
    a = 10*a;
    printf("The value of a is %d", a);
    return 0;
}

*/
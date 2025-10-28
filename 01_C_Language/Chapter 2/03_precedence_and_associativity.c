#include <stdio.h>

int main()
{

    // BODMAS rule is followed
    // But here we call it precedence and associativity 
    // The term bodmas is avoided in exams and official works

    int a = 3, b = 6, c = 9;
    int d = a*b*c/9;
    int e = 3*b/2*c+7*a;
    printf("The value is %d\n", d);
    printf("The value of e is %d\n", e);
    return 0;
}
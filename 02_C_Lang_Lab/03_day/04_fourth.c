// WAP to find roots of quadratic equation

#include<stdio.h>
#include<math.h>

int main(){

    int a,b,c,d;
    float r1,r2;
    printf("Enter the value of a, b, c \n");
    scanf("%d%d%d",&a,&b,&c);
    d = ((b*b)-(4*a*c));
    if (d == 0){
        printf("Both the roots of given eqaution are real and equal\n");
        r1 = r2 =(-b)/2*a;
        printf("THe roots are %f and %f",r1,r2);
    }

    else if (d>0){
        printf("The roots are real and distinct\n");
        r1 = (-b+sqrt(d))/2*a;
        r2 = (-b-sqrt(d))/2*a;
        printf("The roots are %f and %f",r1,r2);
    }

    else{
        printf("The roots are imaginary");
    }
    return 0;
}
/*  int and int gives int
    float and int gives float 
    float and float gives float */

    #include <stdio.h>
    
    int main()
    {
        int a = 9;
        int b = 2;
        float c = a/b;
        // printf("the result of a divided by b is %f\n",a/b); it will return zero as a and b both are int datatype but we use %f which is a format specifier for float datatype
        printf("the result of a divided by b is %d\n",a/b);
        printf("the result of a divided by b is %f\n",c);
        float x = 9;
        int y = 2;
        printf("the result of x divided by y is %f",x/y);

        int s = 3.5;
        int t = 3.9;
        printf("\n%d",s); // no round off just demotion meanse it is just like greatest integer function of maths
        printf("\n%d",t);

        return 0;
    }
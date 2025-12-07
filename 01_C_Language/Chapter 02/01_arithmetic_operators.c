#include <stdio.h>

int main()
{
    int a = 4;
    int b = 3;
    int c = a+b;
    printf("a + b = %d\n",c);
    
    printf("The remainder when %d is divided by %d is %d",a,b,a%b);
    
    int p = 12;
    int q = 3, r = 4;
    int l,m,n;

    l = p%q;
    m = p%r;
    n = r%q;

    printf("\n%d\n%d\n%d", l, m, n);

    return 0;
}
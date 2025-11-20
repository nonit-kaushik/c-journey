#include <stdio.h>
void swap(int a, int b);  // Formal arguments or parameters
void swap(int a, int b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    printf("%d and %d", a, b);
}
int main(){
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a ,&b);
    printf("Value before swaping are %d and %d\n", a, b);
    printf("Value after swaping are ");
    swap(a,b);
    return 0;
}
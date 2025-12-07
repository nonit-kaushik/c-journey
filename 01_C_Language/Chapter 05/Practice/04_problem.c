// WAP to print fibbonaci series of given elements
/*

#include <stdio.h>
void PrintFibbo(int);
void PrintFibbo(int n){
    int first = 0, second = 1, temp = 0 ;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", first);
        temp = second;
        second = first + second;
        first = temp;
    }
}
int main(){
    int ele;
    printf("Enter the number of elements: ");
    scanf("%d", &ele);
    PrintFibbo(ele);
    return 0;
}

*/

// WAP to print element of fibbonaci series at given postion

#include <stdio.h>

int FibboEle(int);
int FibboEle(int n)
{
    if (n == 1 || n == 2)
    {
        return n-1;
    }
    return FibboEle(n-1) + FibboEle(n-2);
}
int main()
{
    int position;
    printf("Enter the position of element: ");
    scanf("%d", &position);
    printf("The element at %d position in fibbonaci series is %d\n", position, FibboEle(position));
    return 0;
}
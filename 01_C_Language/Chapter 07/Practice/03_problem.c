#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n*(i+1);
    }
    
    printf("Table of %d :\n",n);

    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", n, i+1, arr[i]);
    }
    
    return 0;
}
#include <stdio.h>

int main() {
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    int *a = &arr1[0];   // pointer

    int n;
    printf("Enter the index of element whose address is to be found: ");
    scanf("%d", &n);

    int *address = a + n;  // C handles size automatically

    printf("The address is %p\n", address);

    return 0;
}

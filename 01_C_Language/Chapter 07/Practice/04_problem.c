// Reversing of array
#include <stdio.h>
int* reverse(int , int []);   // this is also correct
int* reverse(int size, int arr_name[]){
// int* reverse(int , int*);
// int* reverse(int size, int* arr_name){
    int temp;
    for (int i = 0; i < size/2; i++)
    {
        temp = arr_name[i];
        arr_name[i] = arr_name[size-1-i];
        arr_name[size-1-i] = temp;
    }
    return arr_name;
}
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array before reversing: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    reverse(n, arr);
    
    printf("\nArray after reversing: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
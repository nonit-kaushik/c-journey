#include <stdio.h>

void getarr(int, int[]);
void getarr(int size, int arr_name[])
{
    printf("Enter the elements[positive and negative] of the array:\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr_name[i]);
    }
}

void putarr(int, int[]);
void putarr(int size, int arr_name[])
{   
    printf("Your array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr_name[i]);
    }
    
    printf("\n");
}

void count(int, int[]);
void count(int size, int arr_name[])
{
    int positive = 0;
    int zero = 0;
    int negative = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr_name[i] > 0)
        {
           positive++; 
        }
        else if (arr_name[i] == 0)
        {
            zero++;
        }
        else{
            negative++;
        }
    }
    printf("The array contains: \n");
    printf("%d positive numbers,\n",positive);
    printf("%d zero and\n",zero);
    printf("%d negative numbers.\n",negative);

}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    getarr(n, arr);
    putarr(n,arr);
    count(n,arr);

    return 0;
}
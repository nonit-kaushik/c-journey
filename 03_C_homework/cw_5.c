#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int my_array[size];

    printf("Enter the elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &my_array[i]);
    }

    for (int j = 0; j < size; j++)
    {
        printf("%d  ", my_array[j]);
    }
    my_array
    return 0;
}
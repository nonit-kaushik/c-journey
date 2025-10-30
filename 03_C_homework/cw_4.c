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
    int index;
    printf("Enter the index you want to delete: ");
    scanf("%d", &index);
    for (int i = index; i < size; i++)
    {
        my_array[i] = my_array[i + 1];
    }
    size=size-1;
    printf("\nUpdated array:\n");
    for(int i = 0; i < size; i++){
        printf("%d ",my_array[i]);
    }
    return 0;
}
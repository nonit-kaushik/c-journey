#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    
    int my_array[size+1];

    printf("Enter the elements of array: "); 
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &my_array[i]);
    }

    for (int j = 0; j < size; j++)
    {
        printf("%d  ", my_array[j]);
    }
    
    int index, value;
    printf("Enter the index where value to be inserted: ");
    scanf("%d", &index);
    printf("\nEnter the value: ");
    scanf("%d", &value);

    for (int i = size+1; i > index; i--)
    {
        my_array[i] = my_array[i - 1];
    }

    my_array[index] = value;

    for (int j = 0; j < size+1; j++)
    {
        printf("%d ", my_array[j]);
    }
    return 0;
}
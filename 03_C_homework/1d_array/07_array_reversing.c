#include <stdio.h>

int main()
{
    int size, temp;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int my_array[size];

    printf("Enter the elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &my_array[i]);
    }

    printf("\nArray before swapping: \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d  ", my_array[i]);
    }

    for (int i = 0; i < size / 2; i++)                // size/2 is critical point because if we apply loop 
    {                                                 // for i < size it will reverse all the elements two
        temp = my_array[i];                           // time result in same array.
        my_array[i] = my_array[size - 1 - i];         // size-1 is last index and -i is for reversing
        my_array[size - i - 1] = temp;
    }

    printf("\nArray after swapping: \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d  ", my_array[i]);
    }

    return 0;
}

/*

temp = a
a = b
b = temp

*/
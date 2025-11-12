#include <stdio.h>

int main()
{
    int row = 3, col = 3;                           // initializing row and col
    int my_2d_arr1[row][col];                       // did't use value of row and col direct here because their value would be used futher
    
    // taking a 2d array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the %dx%d element: ", i + 1, j + 1);
            scanf("%d", &my_2d_arr1[i][j]);
        }
    }

    // printing the above array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", my_2d_arr1[i][j]);
        }
        printf("\n");
    }

    // taking another 2d array
    int my_2d_arr2[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the %dx%d element: ", i + 1, j + 1);
            scanf("%d", &my_2d_arr2[i][j]);
        }
    }

    // printing the above array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", my_2d_arr2[i][j]);
        }
        printf("\n");
    }

    // adding above 2d array and storing in a new 2d array
    int sum_arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum_arr[i][j] = my_2d_arr1[i][j] + my_2d_arr2[i][j];
        }
    }

    // printing the final sum of above 2d array
    printf("\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", sum_arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
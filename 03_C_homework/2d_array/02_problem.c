#include <stdio.h>

int main()
{
    int row = 3, col = 3;
    int my_2d_arr1[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the %dx%d element: ", i + 1, j + 1);
            scanf("%d", &my_2d_arr1[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", my_2d_arr1[i][j]);
        }
        printf("\n");
    }
    int my_2d_arr2[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the %dx%d element: ", i + 1, j + 1);
            scanf("%d", &my_2d_arr2[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", my_2d_arr2[i][j]);
        }
        printf("\n");
    }
    int sum_arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum_arr[i][j] = my_2d_arr1[i][j] + my_2d_arr2[i][j];
        }
    }
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
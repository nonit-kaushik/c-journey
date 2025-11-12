#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter the number of rows and coloums: ");
    scanf("%d %d", &row, &col);
    int my_arr[row][col];
    int trans_arr[col][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the %dx%d element: ", i + 1, j + 1);
            scanf("%d", &my_arr[i][j]);
        }
    }
    printf("Given array: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", my_arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            trans_arr[i][j] = my_arr[j][i];
        }
    }
    printf("Transposed array: \n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", trans_arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
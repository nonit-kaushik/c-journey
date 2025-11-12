#include <stdio.h>

int main()
{
    int row, col, sum = 0;
    printf("Enter the number of rows and coloumns: ");
    scanf("%d %d", &row, &col);
    int my_2d_arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the %dx%d element: ", i + 1, j + 1);
            scanf("%d", &my_2d_arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += my_2d_arr[i][j];
        }
    }

    printf("%d",sum);
}
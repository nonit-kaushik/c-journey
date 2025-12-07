// Table of 2 7 and 9 in an array
#include <stdio.h>

int main()
{
    int a = 3, b = 7, c = 9;
    int row = 3, col = 10;
    int table_array[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0)
            {
                table_array[i][j] = a * (j + 1);
            }
            else if (i == 1)
            {
                table_array[i][j] = b * (j + 1);
            }
            else
            {
                table_array[i][j] = c * (j + 1);
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", table_array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
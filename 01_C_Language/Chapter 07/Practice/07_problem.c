#include <stdio.h>

int main()
{   
    int a, b, c;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);
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
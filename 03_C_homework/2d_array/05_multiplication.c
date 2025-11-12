#include <stdio.h>
int main()
{
    int row1, col1, row2, col2;
    printf("Enter the value of row and column of 1st matrix: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter the value of row and column of 2nd matrix: ");
    scanf("%d %d", &row2, &col2);
    if (row2 != col1)
    {
        printf("Number of column in first matrix should be equal to number of rows in second matrix");
        return 0;
    }
    else
    {
        int arr1[row1][col1];
        int arr2[row2][col2];
        int arr3[row1][col2];
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                printf("Enter the %dx%d element of 1st: ", i + 1, j + 1);
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("Enter the %dx%d element of 2nd: ", i + 1, j + 1);
                scanf("%d", &arr2[i][j]);
            }
        }
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < col2; j++){
                arr3[i][j]=0;
                for(int k = 0; k < col1; k++){
                    arr3[i][j] += arr1[i][k]*arr2[k][j];
                }
            }
        }
        printf("Matrix 1:\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                printf("%d ",arr1[i][j]);
            }
            printf("\n");
        }
        printf("Matrix 2:\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("%d ",arr2[i][j]);
            }
            printf("\n");
        }
        printf("Matrix 3:\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("%d ",arr3[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
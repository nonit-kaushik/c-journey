#include <stdio.h>

int main()
{
    int num = 6;
    // printf("Enter the number: ");
    // scanf("%d",&num);
    for (int i = 0; i < num - 3; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (j!=i*2+1||j!=num-i*2+1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    for (int i = 0; i < num/2; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (j>num/2+i||j<num/2-i)
            {
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

/*
#include <stdio.h>

int main() {
    int num;
    printf("Enter number of rows: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < 2*num; j++) {
            if (j >= num - i && j <= num + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

*/
#include <stdio.h>

int main()
{

    int num = 0, i = 2;
    printf("Enter the number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        int is_prime = 1;
        int j = 2;
        while (j <= i / 2)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
            j++;
        }

        if (is_prime == 1)
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
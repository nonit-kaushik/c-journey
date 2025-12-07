#include <stdio.h>

int main()
{
    int num, is_prime = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num == 1 || num == 0)
    {
        is_prime = 0;
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                is_prime = 0;
            }
        }
    }
    if (is_prime == 1)
    {
        printf("%d is prime number", num);
    }
    else
    {
        printf("%d is not prime number", num);
    }

    return 0;
}
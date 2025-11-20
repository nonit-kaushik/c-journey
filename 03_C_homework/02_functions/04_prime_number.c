#include <stdio.h>
int prime(int);
int prime(int num)
{
    int i = 2;
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
}
int main()
{
    int num = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    prime(num);
    return 0;
}
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("You entered 1\n");break;
    case 2:
        printf("You entered 2\n");
        break;
    case 3:
        printf("You entered 3\n");break;
    case 4:
        printf("You entered 4\n");break;
    case 5:
        printf("You entered 5\n");
        break;
    default:
        printf("Nothing Matched\n");
    }
    return 0;
}

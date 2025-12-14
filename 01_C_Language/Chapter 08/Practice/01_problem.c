#include <stdio.h>

int main()
{
    char str[7];
    // scanf("%s", str);
    for (int i = 0; i < 6; i++)
    {
        scanf(" %c", &str[i]); // space added to flush \n from buffer
        // other wise getchar();
        // or fflush(stdin);
    }
    str[6] = '\0';

    printf("%s\n", str);
    return 0;
}
#include <stdio.h>

int main()
{
    char str1[100], str_vow[100], str_cons[100], j = 0, k = 0;
    printf("Enter the str: ");
    scanf("%[^\n]", str1);
    for (int i = 0; str1[i] != '\0'; i++)
    {
        switch (str1[i])
        {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            str_vow[j] = str1[i];
            j++;
            break;
        case ' ':
            continue;
        default:
            str_cons[k] = str1[i];
            k++;
            break;
        }
    }
    str_vow[j] = '\0';
    str_cons[k] = '\0';
    printf("%s\n", str1);
    printf("%s\n", str_vow);
    printf("%s\n", str_cons);

    return 0;
}
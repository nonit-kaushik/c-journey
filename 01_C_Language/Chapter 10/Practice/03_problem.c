// Read a file then write it twice it in a new file character by character
#include <stdio.h>

int main()
{
    FILE *ptr1, *ptr2;
    char ch;
    int i = 0;
    ptr1 = fopen("03_file1.txt", "r");
    ptr2 = fopen("03_file2.txt", "w");
    while (i < 2)
    {
        while (1)
        {
            ch = getc(ptr1);
            if (ch == EOF)
            {
                putc('\n',ptr2);
                break;
            }
            putc(ch, ptr2);
        }
        rewind(ptr1);
        i++;
    }
    fclose(ptr1);
    fclose(ptr2);

    return 0;
}
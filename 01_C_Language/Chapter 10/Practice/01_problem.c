// Write a program to read three integers form a file
#include <stdio.h>

int main(){
    FILE *ptr;
    int num, i = 0;
    ptr = fopen("01_file.txt", "r");
    while (i < 3)
    {
        fscanf(ptr,"%d", &num);
        printf("%d\n", num);
        i++;
    }
    fclose(ptr);
    
    return 0;
}
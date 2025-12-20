#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("tushar5.txt", "w");
    fputc('N', ptr);
    fputs("Tushar Sharma", ptr);
    fclose(ptr);
    ptr = fopen("tushar5.txt", "r");
    char c[100];
    fgets(c,100,ptr);
    printf("%s",c);
    return 0;
}
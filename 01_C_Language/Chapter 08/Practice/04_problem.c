// PYTHON LIKE STRING SLICING //
#include <stdio.h>
char* slice(char* , int, int);
char* slice(char* str, int start, int end){
    static char output[100];
    int j = 0;
    for (int i = start; i < end; i++)
    {
        output[j++] = str[i];
    }
    output[end] = '\0';
    return output;
}
int main(){
    char str1[14] = "TUSHAR SHARMA";
    char* ptr = slice(str1,0,6);
    printf("%s", ptr);
    return 0;
}
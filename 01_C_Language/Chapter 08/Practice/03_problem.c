// My logic for string slicing
#include <stdio.h>
char* slice(char* , int, int);
char* slice(char* str, int m, int n){
    static char output[100];
    for (int i = 0; i <= n - m; i++)
    {
        output[i] = str[m+i];
    }
    output[n-m+1] = '\0';
    return output;
}
int main(){
    char str1[14] = "TUSHAR SHARMA";
    char* ptr = slice(str1,0,5);
    printf("%s", ptr);
    return 0;
}
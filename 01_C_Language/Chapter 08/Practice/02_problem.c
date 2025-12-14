#include <stdio.h>

int strlen(char []);
int strlen(char arr[]){
    int i = 0, len = 0;
    while (arr[i] != '\0')
    {
        len++;
        i++;
    }
    return len;
}

int main(){

    char name[] = "Tushar";
    printf("Length of the string %s is %d", name, strlen(name));
    
    return 0;
}
/*
String is a collection of characters which is stored in a character array having null character in the end.
Syntax = char string_name[size]
Note: Size of character array to store a string must be minimum 1 greater than string length.
*/
#include <stdio.h>

int main(){
    char name[100] = "Tushar";
    printf("%s",name);
    return 0;
}
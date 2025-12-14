#include <stdio.h>
char* strcpy(char*, char*);
char* strcpy(char* dest, char* src){
    char* start = dest;
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return start;
}
int main(){
    char str1[100];
    char str2[100] = "Walter White";
    printf("str1 before copy: %s\n",str1);
    strcpy(str1,str2);
    printf("str1 after copy: %s\n", str1);
    return 0;
}
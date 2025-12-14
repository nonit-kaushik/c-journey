#include <stdio.h>
int strlen(char*);
int strlen(char* str){
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
int count(char* , char);
int count(char* str, char x){
    int freq = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == x)
        {
            freq++;
        }
        
    }
    
    return freq;
}
int main(){
    char str[] = "Programming in Python";
    char c = 'n';
    int y = count(str,c);
    printf("\'%c\' comes %d time in \'%s\'", c, y, str);
    return 0;
}
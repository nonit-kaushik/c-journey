#include <stdio.h>
#include <string.h>

int main(){
    char str[]= "Enter Your Message";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '#';
        }
        else{
            str[i] = str[i] - 10;
        }
    }
    printf("%s\n",str);
    return 0;
}
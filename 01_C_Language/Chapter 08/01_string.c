#include <stdio.h>
// string : It is a character array terminating with a null character
int main(){
    char name[10] = "Tushar";// Compiler will auto add null character at last if char array is written in this format.
    char got[7] = {'S', 'H', 'A', 'R', 'M', 'A' , '\0'}; // "\0" is a null character and must be added manually if char array is written in this format.
    // for (int i = 0; i < 6; i++)
    // {
        //     printf("%c",name[i]);
        // }
    printf("%s ", name);
    // char got[] = {'S', 'H', 'A', 'R', 'M', 'A'}; if char array is written in this format without adding null char at last then --->
    printf("%s\n", got); // ---> this will print character from memory continuously untill null character is found
    return 0;
}
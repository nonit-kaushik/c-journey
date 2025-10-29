// 97-122 is the range of ascii value of lower case alphabet
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    // int ascii_value;
    // ascii_value = ("%d",ch);
    // if(ascii_value >= 97 && ascii_value <= 122){
    //     printf("The letter you entered is lower case alphabet.");
    // }
    // else{
    //     printf("The letter you entered is not lower case alphabet.");
    // }
    
    if(ch >= 'a' && ch <= 'z'){
        printf("The letter you entered is lower case alphabet.");
    }
    else{
        printf("The letter you entered is not lower case alphabet.");
    }
    return 0;
}
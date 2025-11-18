#include <stdio.h>

int main(){
    char name[100];
    printf("Enter Your Name: ");
    scanf("%[^\n]",name);
    printf("%s",name);
    
    return 0;
}


// #include <stdio.h>

// int main(){
//     char name[100];
//     printf("Enter Your Name: ");
//     scanf("%[^|]",name);
//     printf("%s",name);
    
//     return 0;
// }
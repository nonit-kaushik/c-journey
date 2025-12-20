#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("tushar2.txt", "r");
    if (ptr)
    {
        int num;
    fscanf(ptr, "%d", &num);     // reads first integer present in file
    printf("The value of num is %d\n", num);
    
    fscanf(ptr, "%d", &num);     // reads second integer present in file
    // if not present it will read first integer
    printf("The value of num is %d\n", num);
    }

    else{
        printf("File doesn't exist.\n");
    }
    
    return 0;
}
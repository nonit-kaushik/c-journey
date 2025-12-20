// If a code run for long time then we should close a file once all the operation on file are completed
#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("tushar3.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);
    
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);
    fclose(ptr);
    return 0;
}
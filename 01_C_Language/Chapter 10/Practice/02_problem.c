// Write a program to read three integers form a file
#include <stdio.h>

int main(){
    FILE *ptr;
    int num, i = 1;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    ptr = fopen("02_file.txt", "w");
    while (i < 11)
    {
        fprintf(ptr,"%d X %d = %d\n", num , i , num*i);
        i++;
    }
    fclose(ptr);
    
    return 0;
}
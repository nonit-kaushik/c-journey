#include <stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("05_file.txt", "r");
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    ptr = fopen("05_file.txt","w");
    fprintf(ptr,"%d",num*2);
    return 0;
}
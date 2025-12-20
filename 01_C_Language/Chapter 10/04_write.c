// If a code run for long time then we should close a file once all the operation on file are completed
#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("tushar4.txt", "w"); // it will erase the content of the file if exist otherwise create a new file
    int num = 5;
    fprintf(ptr,"%d", num);
    num = 8;
    fprintf(ptr,"%d", num); // it will append 8
    fclose(ptr);

    // ptr = fopen("tushar4.txt", "w");    // now it will erase all the text from file 
    // num = 5;
    // fprintf(ptr,"%d", num);            //then write 5

    
    ptr = fopen("tushar4.txt", "r");
    fscanf(ptr,"%d", &num);
    printf("%d",num);           // it will print 58 because when we write 8 after writing 5 , fprintf() doesn't add space between them just append 8 after 5
    fclose(ptr);
    ptr = fopen("tushar4.txt", "a");
    fprintf(ptr,"%s",&"Tushar Sharma");
    return 0;
}
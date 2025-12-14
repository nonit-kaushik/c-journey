// Wap a program to find length of a string and concatenate two string with adding a space between them
#include <stdio.h>
#include <string.h>

int main(){
    // char str1[50] = "Tushar";
    // char str2[50] = "Sharma";
    // printf("Length of str1: %d\n",strlen(str1));
    // printf("Length of str2: %d\n",strlen(str2));
    // strcat(str1," ");
    // printf("Length of str1: %d\n",strlen(str1));
    // strcat(str1,str2);
    // printf("str1: %s\n", str1);
    // printf("Length of str1: %d\n",strlen(str1));
    int result;
    result = strcmp("DEEP","JOKE"); // Negative b/c ascii value of D is shorter than J
    printf("%d\n", result);
    result = strcmp("JOKE","joke"); // negative
    printf("%d\n", result);
    result = strcmp("JOKE","DEEP"); // Positive b/c ascii value of J is greater than D
    printf("%d\n", result);
    result = strcmp("JOKE","JOKE"); // 0 because both the string are same
    printf("%d",result);

    return 0;
}
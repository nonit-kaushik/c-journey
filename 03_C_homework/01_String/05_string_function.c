// There are string functions which are predefined in string.h header file.

#include <stdio.h>
#include <string.h>
int main(){
    // strlen(str) takes one string as argument and return length of string.
    char str1[100];
    printf("Enter the string: ");
    scanf("%[^\n]",str1);
    getchar();
    printf("%ld\n",strlen(str1));    // format specifier ld is used for long int

    // strcpy(str1,str2) takes two string as arguments and copy str2 into str1
    char str2[100];
    char str3[100];
    printf("Enter the string: ");
    scanf("%[^\n]",str2);
    getchar();
    printf("Enter the string: ");
    scanf("%[^\n]",str3);
    getchar();
    strcpy(str2,str3);
    printf("%s\n",str2);

    // strcat(str1,str2) takes two string as arguments and concadinates(merges) both strings and stores in str1
    char str4[100];
    char str5[100];
    printf("Enter the string: ");
    scanf("%[^\n]",str4);
    getchar();
    strcat(str4," ");
    strcat(str4,str5);
    printf("%s\n",str4);

    // strrev(str1) takes a string as an argument and reverse it
    char str6[100];
    printf("Enter the string: ");
    scanf("%[^\n]",str6);
    getchar();
    strrev(str6);
    printf("Reversed string: %s",str6);
    return 0;
}
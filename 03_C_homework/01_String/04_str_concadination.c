// Add string 1 and string 2 with a space b/w them

#include <stdio.h>

int main(){
    int i=0,j=0;
    char str1[100],str2[100],str3[200];
    printf("Enter string 1: ");
    scanf("%s",str1);
    printf("Enter string 2: ");
    scanf("%s",str2);
    while (str1[i]!='\0'){
        str3[j]=str1[i];
        i++;
        j++;
    }
    i=0;
    str3[j++]=' ';
    while(str2[i]!='\0'){
        str3[j]=str2[i];
        i++;
        j++;
    }
    
    printf("%s",str3);
    return 0;
}
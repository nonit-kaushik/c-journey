// #include <stdio.h>

// int main(){
//     char str[100];
//     int len;
//     printf("Enter a string: ");
//     scanf("%[^\n]s",str);
//     len = printf(str);
//     printf("The length is %d",len);
//     return 0;
// }

#include <stdio.h>

int main(){
    char str[100];
    int count=0,i=0;
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    while (str[i]!='\0')
    {
        count++;
        i++;
    }
    
    printf("%d\n",count);
    return 0;
}
// WAP to print table of a given number in reversed order
#include <stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i = 10; i > 0; i--){
        printf("%d X %d = %d\n",num,i,num*i);
    }

    return 0;
}
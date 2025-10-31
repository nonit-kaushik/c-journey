// WAP to find factorial of a given number 
// #include <stdio.h>

// int main(){
//     int num,fact=1;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     for (int i = 1; i <= num; i++)
//     {
//         fact*=i;
//     }
//     printf("The factorial of %d is %d\n",num,fact);
    
//     return 0;
// }

#include <stdio.h>

int main(){
    int num,fact=1,i=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(i<=num){
        fact*=i;
        i++;
    }
    printf("%d! = %d\n",num,fact);
    return 0;
}
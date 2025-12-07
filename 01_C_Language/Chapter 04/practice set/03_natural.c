// WAP to print sum of first n natural number using while loop, for loop and do while loop

// #include <stdio.h>

// int main(){
//     int n,sum=0,i=1;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     while(i<=n){
//         sum+=i;
//         i++;
//     }
//     printf("The sum of first %d natural number is %d\n",n,sum);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n,sum=0;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++){
//         sum+=i;
//     }
//     printf("The sum of first %d natural number is %d\n",n,sum);
//     return 0;
// }

#include <stdio.h>

int main(){
    int n,sum=0,i = 1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    do
    {
        sum+=i;
        i++;
    } while (i<= n);
    printf("The sum of first %d natural number is %d\n",n,sum);
    return 0;
}
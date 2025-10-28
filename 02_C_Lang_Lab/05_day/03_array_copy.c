#include<stdio.h>
int main(){
    int a[5], b[5], i;
    printf("Enter the elements of a: ");
    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
        b[i] = a[i];
    }
    printf("The elements of array b are:\n");
    for (i=0;i<5;i++){
        b[i]=a[i];
        printf("%d\n",b[i]);
    }
    return 0;
}
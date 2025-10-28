#include<stdio.h>
int main(){
    int a[5], b[5],c[5], i;
    printf("Enter the elements of a: \n");
    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
        b[i] = a[i];
    }
    printf("\nEnter the elements of b: \n");
    for (i=0;i<5;i++){
        scanf("%d",&b[i]);
    }

    for (i=0;i<5;i++){
        c[i] = a[i]+b[i];
        printf("%d, ",c[i]);
    }
    return 0;
}
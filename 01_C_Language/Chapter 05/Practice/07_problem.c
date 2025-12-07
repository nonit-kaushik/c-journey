#include <stdio.h>
int pattern(int);
int pattern(int row){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < 2*i+1; j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}
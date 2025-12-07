#include <stdio.h>
char rtpmd(int);
char rtpmd(int n){
    for(int i = 0; i < n; i++){
        for (int j =0; j < n - i; j++){
            printf(" ");
        }
    }
}
int main(){
    int lines;
    printf("Enter the value of lines: ");
    scanf("%d",&lines);
    rtpmd(lines);
    return 0;
}
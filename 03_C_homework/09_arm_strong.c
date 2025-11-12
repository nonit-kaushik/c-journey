#include <stdio.h>
#include <math.h>

int main(){
    int num,len=0,r,q,temp,result;
    double sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    len = printf("%d",num);
    temp = num;
    while(temp!=0){
        sum = sum + pow((temp % 10),len);
        temp = temp/10;
    }
    if (sum == num){
        printf(" is an armstrong number");
    }
    else{
        printf(" is not an armstorng number");
    }
    return 0;
}
#include<stdio.h>

int main(){

    int hindi, eng, math, science, sst, total;
    float average;
    printf("Enter the marks of Hindi, English, Maths, Science, SST: ");
    scanf("%d%d%d%d%d",&hindi,&eng,&math,&science,&sst);
    total = hindi+eng+math+science+sst;
    average = total/5;
    printf("Total Marks Obtained out of 500: %d\nPercentage Obtained: %f",total,average);

    return 0;
}
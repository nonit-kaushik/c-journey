#include <stdio.h>
float SI();          // Declaration statement
float SI(){          // Function definition
    float p,r,t,si;
    printf("Enter the value of principle rate time: ");
    scanf("%f %f %f",&p,&r,&t);
    si = p*r*t/100;  // Calc. Simple Interest
    return si;       //  Retrun Simple Interest
}
int main(){
    printf("Simple Interest is %.2f\n",SI());  // Calling and printing SI
    return 0;
}
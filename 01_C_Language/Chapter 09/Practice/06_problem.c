#include <stdio.h>

typedef struct complexlex_Number{
    int real;
    int imaginary;
} complex;
void complexscan(complex []);
void complexscan(complex* comp_arry){
    for (int i = 0; i < 5; i++)
    {   
        printf("Enter the Complex number Z%d:\n", i+1);
        scanf("%d %d", &comp_arry[i].real , &comp_arry[i].imaginary);
    }
}
complex* complexdisplay(complex []);
complex* complexdisplay(complex* comp_arry){
    for (int i = 0; i < 5; i++)
    {   
        printf("Complex number Z%d: ", i+1);
        printf("%d+%di\n", comp_arry[i].real , comp_arry[i].imaginary);
    }
}

int main(){
    complex c[5];
    complexscan(c);
    complexdisplay(c);
    return 0;
}
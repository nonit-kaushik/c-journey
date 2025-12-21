#include <stdio.h>
#include <string.h>
typedef struct employee{
    char name[10];
    int salary;
} emp;
int main(){
    emp e1,e2;
    printf("Enter the name and salary of employee 1: ");
    scanf("%s",e1.name);
    scanf("%d",&e1.salary);
    printf("Enter the name and salary of employee 2: ");
    scanf("%s",e2.name);
    scanf("%d",&e2.salary);
    FILE *ptr;
    ptr = fopen("04_file.txt", "w");
    fputs(e1.name,ptr);
    fputc(',',ptr);
    fprintf(ptr,"%d",e1.salary);
    fputc('\n',ptr);
    fputs(e2.name,ptr);
    fputc(',',ptr);
    fprintf(ptr,"%d",e2.salary);
    fputc('\n',ptr);
    return 0;
}
#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};

int main(){
    char name[20];
    struct employee e1, e2, e3;    
    printf("Enter the id of employee 1: ");
    scanf("%d",&e1.id);
    printf("Enter the name of employee 1: ");
    scanf("%s",name);
    strcpy(e1.name,name);
    printf("Enter the salary of employee 1: ");
    scanf("%f",&e1.salary);
    
    printf("Enter the id of employee 2: ");
    scanf("%d",&e2.id);
    printf("Enter the name of employee 2: ");
    scanf("%s",name);
    strcpy(e2.name,name);
    printf("Enter the salary of employee 2: ");
    scanf("%f",&e2.salary);
    
    printf("Enter the id of employee 3: ");
    scanf("%d",&e3.id);
    printf("Enter the name of employee 3: ");
    scanf("%s",name);
    strcpy(e3.name,name);
    printf("Enter the salary of employee 3: ");
    scanf("%f",&e3.salary);
    printf("\n");
    printf("Employee 1:\nId: %d\nName: %s\nSalary: $%.2f\n\n",e1.id,e1.name,e1.salary);
    printf("Employee 2:\nId: %d\nName: %s\nSalary: $%.2f\n\n",e2.id,e2.name,e2.salary);
    printf("Employee 3:\nId: %d\nName: %s\nSalary: $%.2f\n\n",e3.id,e3.name,e3.salary);
    return 0;
}
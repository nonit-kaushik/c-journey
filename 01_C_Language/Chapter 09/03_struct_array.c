#include <stdio.h>
#include <string.h>

struct employee{
    int id;
    char name[20];
    float salary;
};

int main(){

    struct employee facebook[5];
    char name[20];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the id of employee %d: ", i+1);
        scanf("%d",&facebook[i].id);
        printf("Enter the name of the employee %d: ", i+1);
        scanf("%s",name);
        strcpy(facebook[i].name,name);
        printf("Enter the salary of the employee %d: ", i+1);
        scanf("%f",&facebook[i].salary);
    }
    
    printf("\n");
    
    for (int i = 0; i < 5; i++)
    {   
        printf("\n");
        printf("Employee %d:\nId: %d\nName: %s\nSalary: $%.2f\n\n", i+1, facebook[i].id, facebook[i].name, facebook[i].salary);
    }
    
    return 0;
}
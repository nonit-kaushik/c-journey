#include <stdio.h>
#include <string.h>
struct employee{   // contains --> id : int | salary : float | name : str (char limit = 20)
    
    // attributes
    int id;
    float salary;
    char name[20];

}; // semicolon is important

int main(){
    struct employee e1, e2;
    e1.id = 12;
    // e1.name = "Tushar"; // not possible in c so we would use strcpy
    e1.salary = 2480;
    strcpy(e1.name,"Tushar");
    printf("Id: %d\nName: %s\nSalary: $%.2f", e1.id, e1.name, e1.salary);
    return 0;
}
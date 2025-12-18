#include <stdio.h>

struct student{
    char name[10];
    int rollno;
    float cgpa;
};

int main(){
    struct student s1 = {"Tushar", 545, 9.5};
    printf("Name: %s\nRollno: %d\nCGPA: %.2f\n", s1.name, s1.rollno, s1.cgpa);
    struct student s2 = {0}; // every attribute sets as zero
    printf("Name: %s\nRollno: %d\nCGPA: %.2f\n", s2.name, s2.rollno, s2.cgpa);
    return 0;
}
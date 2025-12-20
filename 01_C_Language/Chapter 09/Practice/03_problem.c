/*
Que- Twenty integers ate to be stored in memory.
     What will you prefer - Array or Structure?

Ans- Array
Why Array?
- Designed for homogeneous data
- Easy indexing
- Loop can be used
- Code is concise and scalable

Why not Structure?
- Structure is used for different datatypes
- If used for same datatype --> Structure is meant to group logically different data
- Using structure for identical elements leads to lengthy and inefficient code
*/
#include <stdio.h>
struct marks
{
     int stu1;
     int stu2;
     /*
     .
     .
     .
     .
     .
     .
     */
    int stu19;
    int stu20;  // we need to write 20 times int 
};

int main(){
     struct marks m;
     m.stu1 = 67;
     m.stu2 = 89;
     /*
     .
     .
     .
     .
     .
     .
     .
     .*/
     m.stu19 = 45;
     m.stu20 = 78;  // we have to assign 20 values manually without loop

     // then print them manually without loop

     int marks[20];
     printf("Enter the marks of the student: \n");
     for (int i = 0; i < 20; i++)
     {
          scanf("%d",&marks[i]);
     }
     for (int i = 0; i < 20; i++)
     {
          printf("%d\n",marks[i]);
     }
     
     
     return 0;
}
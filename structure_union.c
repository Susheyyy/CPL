#include <stdio.h>
#include <string.h>
#include<conio.h>

// Structure to store student data 
struct Student
 { 
int roll_no; 
char name[50];
 char department[50]; 
char course[50]; 
int year_of_joining;
 };

 // Union to store student data 
union StudentUnion 
{ 
int roll_no; 
char name[50];
 char department[50]; 
char course[50];
 int year_of_joining; 
}; 

// Function to print student details from a structure 

void printStudent(struct Student student) 
{ 
printf("Roll No: %d\n", student.roll_no); 
printf("Name: %s\n", student.name); 
printf("Department: %s\n", student.department);
 printf("Course: %s\n", student.course); 
printf("Year of Joining: %d\n", student.year_of_joining);

}

 // Function to print student details from a union 
void printStudentUnion(union StudentUnion student) 
{
 printf("Roll No: %d\n", student.roll_no); 
 } 

int main() 
{ 
// Define a structure variable and assign values 

struct Student student1 = {1024, "Sushmita Das", "Computer Engineering", "B.Tech", 2024};
 // Define a union variable and assign values

 union StudentUnion student2; student2.roll_no = 102; 

printf("Student 1 (using Structure):\n"); 
printStudent(student1); 

 printf("\nStudent 2 (using Union):\n"); 

printStudentUnion(student2);

getch();
 return 0; 
}

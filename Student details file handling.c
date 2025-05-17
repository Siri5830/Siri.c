#include <stdio.h>

struct Student

{

 char name[50];

 int roll;

 float marks;

};

int main() 

{

 struct Student s;

 FILE *fp = fopen("students.txt", "w");

 if (fp == NULL) {

 printf("Error opening file!\n");

 return 1;

 }

 printf("Enter student details:\n");

 printf("Name: ");

 scanf("%s", s.name);

 printf("Roll: ");

 scanf("%d", &s.roll);

 printf("Marks: ");

 scanf("%f", &s.marks);

 fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);

 fclose(fp);
 printf("Data written to file successfully.\n");
 fp = fopen("students.txt", "r");
 if (fp == NULL) {
 printf("Error reading file!\n");
 return 1;
 }
 fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks);
 printf("\nStudent Details from File:\n");
 printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
 fclose(fp);
 return 0;
}

#include <stdio.h>
int main() 
{ 
    int marks;
printf("Enter the student's marks: ");
scanf("%d", &marks);
if (marks >= 40)
{
    printf("Passed\n");
} 
else 
{
    printf("Failed\n");
}
}

#include<stdio.h>
struct employee 
{
    char name[10];
    int ID;
    int salary;
};
int main()
{
    int i;
    struct employee emp[5];
    printf("Enter the information of employees: ");
    for(i=0;i<5;i++)
    {
        printf("\nemployee %d\n",i+1);
        printf("name: ");
        scanf("%s",emp[i].name);
        printf("ID: ");
        scanf("%d",&emp[i].ID);
        printf("salary: ");
        scanf("%d",&emp[i].salary);
    }
    int sum=0,avg;
    {
        for(i=0;i<5;i++)
        sum=sum+emp[i].salary;
    }
    avg=sum/5;
    printf("average salary of employees is: %d\n",avg);
    
}

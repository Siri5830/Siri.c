#include<stdio.h>
struct address
{
    char city[10];
    int pin;
};
struct employee
{
    char name[10];
    struct address add;
};
int main()
{
    int i;
    struct employee emp;
    printf("name: ");
    scanf("%s",&emp.name);
    printf("city: ");
    scanf("%s",&emp.add.city);
    printf("pin: ");
    scanf("%d",&emp.add.pin);
}

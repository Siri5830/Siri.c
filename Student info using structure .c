#include<stdio.h>
struct student
{
    char name[10];
    int roll_no;
    int marks;
};
int main(){
    int i;
    struct student s[10];
    printf("student information: ");
    for(i=0;i<3;i++)
    {
        printf("\nname: ");
        scanf("%s",&s[i].name);
        printf("roll_no: ");
        scanf("%d",&s[i].roll_no);
        printf("marks: ");
        scanf("%d",&s[i].marks);
    }
    for(i=0;i<3;i++)
    {
        printf("\n");
        printf("%s\n",s[i].name);
        printf("%d\n",s[i].roll_no);
        printf("%d\n",s[i].marks);
    }
}

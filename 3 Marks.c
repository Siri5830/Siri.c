#include<stdio.h>
int main()
{
    int i,j,k=1,marks[3][3];
    printf("Enter the marks of the students: ");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&marks[i][j]);
    for(i=0;i<3;i++)
    {
        printf("\nmarks of students is: %d\n",k);
        for(j=0;j<3;j++)
        printf("%4d",marks[i][j]);
        k=k+1;
    }
}

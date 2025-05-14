#include<stdio.h>
int main()
{
    int sum=0,i,num[10];
    printf("Enter the elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("sum of the numbers: %d\n",sum);
    return 0;
}

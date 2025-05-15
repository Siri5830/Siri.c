#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5},i;
    int *ptr=arr;
    printf("array elements is: \n");
    for(i=0;i<5;i++)
    {
        printf("elements [%d]: %d\n",i,*(ptr+i));
    }
}

#include<stdio.h>
int main()
{
    int x=10,*p;
    int *ptr=&x;
    printf("Value of x: %d\n",x);
    printf("Value of ptr: %d\n",*ptr);
    *ptr=20;
    printf("New Value is: %d\n",*ptr);
}

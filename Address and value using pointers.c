#include<stdio.h>
int main()
{
    int num=5;
    int *p;
    p=&num;
    printf("address of num: %p\n",p);
    printf("value of num: %d\n",*p);
}

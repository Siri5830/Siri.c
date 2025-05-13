#include<stdio.h>
//function declaration 
int sub(int a,int b)
{
    return a-b;
}
int main()
{
    //function calling
    int result =sub(5,10);
    printf("Result is %d\n",result);
    return 0;
}

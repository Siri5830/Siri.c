#include<stdio.h>
int main()
{
    char fullname[100];
    printf("enter your fullname: ");
    fgets(fullname,sizeof(fullname),stdin);
    printf("your full name is: %s\n",fullname);
}

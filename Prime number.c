#include<stdio.h>
int main()
{
    int num,i,isprime=1;
    printf("Enter the number starting from positive 2: ");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
    if(num%2==0)
    isprime=0;
    }
    if(isprime)
    {
        printf(" it's a prime number %d\n");
    }
        else{
        printf("it's not a prime number %d\n");
    }
}

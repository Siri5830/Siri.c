#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,isprime=1;
    printf("Enter the number starting from positive 2: ");
    scanf("%d",&num);
    if(num<=1)
    {
        isprime=0;
    }
    else 
    {
    int limit=(int)sqrt(num);
    for(i=2;i<=limit;i++)
    {
    if(num%2==0)
    {
    isprime=0;
    }
    }
    if(isprime)
    {
        printf(" it's a prime number %d\n");
    }
        else{
        printf("it's not a prime number %d\n");
    }
    }
}

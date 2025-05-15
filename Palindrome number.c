#include<stdio.h>
int main()
{
    int num,rev=0, original,rem;
    printf("Enter the number: ");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if(original==rev)
    {
        printf("%d\n,is palindrome",original);
    }
        else 
        {
        printf("%d\n,is not a palindrome",original);
    }
}

#include<stdio.h>
int main()
{
    int num, result=0, original,rem;
    printf("Enter the number: ");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        rem=num%10;
        result+=rem*rem*rem;
        num/=10;
    }
    if(original==result)
    {
        printf("%d\n,is armstrong",original);
    }
    else
        {
        printf("%d\n,is not a armstrong",original);
    }
}

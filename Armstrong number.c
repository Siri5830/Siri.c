#include<stdio.h>
#include<math.h>
int main()
{
    int num,digits=0, original,rem;
    double 
    printf("Enter the number: ");
    scanf("%d",&num);
    original=num;
    int temp=num;
    while(temp!=0)
    {
        temp/=10;
        digits++;
    }
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        result+=pow(rem, digits);
        temp/=10;
    }
    if
        printf("%d\n,is armstrong",original);
    }
    else
        {
        printf("%d\n,is not a armstrong",original);
    }
}

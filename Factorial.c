#include<stdio.h>
int main()
{
    int i,n,fact=1,c=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("1");
    }
    else
    {
    for(i=1;i<=n;i++)
    {
        c*=i;
    }
    printf("%d",c);
}
}

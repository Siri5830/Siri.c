#include<stdio.h>
int main()
{
    int n,t1,t2,nextterm;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("fibonacci series: %d,%d",t1,t2);
    for(int i=3;i<=n;i++)
    {
        nextterm=t1+t2;
        printf("%d",nextterm);
        t1=t2;
        t2=nextterm;
    }
    
}

#include<stdio.h>
int i;
int sri_fact(int n,int fact){
    if(n==0){
        return 1;
    }
    else if(n<0){
        printf("Enter the positive number ");
    }
    else{
        for(i=1;i<=n;i++)
        fact*=i;
    }
return fact;
}
int main(){
    int c;
    c=sri_fact(5,1);
    printf("%d",c);
}

#include <stdio.h>
int main()
{
    float num1,num2;
    float sum, difference, product, quotient;
    printf("Enter first number: ");
    scanf("%f",&num1);
    printf("enter second number: ");
    scanf("%f",&num2);
    sum=num1+num2;
    difference=num1-num2;
    product=num1*num2;
    quotient;
    if (num2!=0)
    {
        quotient=num1/num2;
        printf("quotient: %.2f\n",quotient);
     }
else
{
    printf("quotient: division by zero error\n");
}
printf("sum: %.2f\n",sum);
printf("difference: %.2f\n", difference);
printf("product: %.2f\n",product);
return 0;
}

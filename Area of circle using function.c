#include<stdio.h>
int r,area;
int cal_area(int r)
{
    return 3.14*r*r;
}
int main()
{
    printf("Enter the radius: ");
    scanf("%d",&r);
    area=cal_area(r);
    printf("area of circle is: %d\n", area);
    return 0;
}

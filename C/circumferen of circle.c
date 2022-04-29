#include<stdio.h>
#define pi 3.14159
int main()
{
    float r,a,c;
    printf("enter a value of radius:\n");
    scanf("%f", &r);
    a=pi*r*r;
    c=2*pi*r;
    printf("the area of circle is %f\n", a);
    printf("the circumference of circle is %f\n", c);
    return 0;
}

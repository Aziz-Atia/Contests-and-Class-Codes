#include<stdio.h>
#include<math.h>
int main()
{
    float s,a,b,c,area;
    printf("enter the values of a,b and c:\n");
    scanf("%f %f %f", &a, &b, &c);
    s=(a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the value of area is: %f\n", area);
    return 0;
}

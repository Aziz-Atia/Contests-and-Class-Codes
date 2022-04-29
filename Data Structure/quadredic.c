#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,b,c,d,x,x1,x2;
    printf("value of a,b and c?\n");
    scanf("%f %f %f", &a, &b, &c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("x1= %f and x2= %f\n",x1,x2);
    }
    else if(d==0)
    {
        x=-b/(2*a);
        printf("x = %f\n",&x);
    }
    else
        printf("no real solution\n");

    return 0;
}

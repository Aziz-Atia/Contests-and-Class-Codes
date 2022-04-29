#include<stdio.h>
#include<math.h>
int main()
{   float x,u,y;
    printf("enter the value of x\n");
    scanf("%f", &x);
    u=(x-1)/x;
    y=u+((u*u)/2)+((u*u*u)/3)+((u*u*u*u)/4);
    printf("the value of y is %f\n", y);
    return 0;
}

#include<stdio.h>
int main()
{
    float a,b,c,total,avrg;
    printf("enter any three values:\n");
    scanf("%f %f %f", &a, &b, &c);
    total=a+b+c;
    avrg=total/3;
    printf("the total value is %f\n", total);
    printf("the average value is %f\n", avrg);

    return 0;
}

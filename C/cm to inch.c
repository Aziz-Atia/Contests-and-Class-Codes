#include<stdio.h>
int main()
{
    float cm,inch;
    printf("enter any value in centimeter:\n");
    scanf("%f", &cm);
    inch=0.394*cm;
    printf("the value in inch is %f", inch);
    return 0;
}

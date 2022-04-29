#include<stdio.h>
int main()
{
    float c,f;
    printf("enter a value in Fahrenheit scale:\n");
    scanf("%f", &f);
    c=5.0/9*(f-32);
    printf("the value in Celsius scale is %f", c);
    return 0;
}

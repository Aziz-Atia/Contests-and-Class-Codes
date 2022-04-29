#include<stdio.h>
int main()
{
    float  I,CM;
    printf("ENTER A VALUE IN INCH:\n");
    scanf("%f", &I);
    CM=2.54*I;
    printf("THE VALUE IN CENTIMETER IS: %f", CM);
    return 0;
}

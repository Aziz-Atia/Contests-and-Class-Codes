#include<stdio.h>
#include<limits.h>
#include<values.h>
#include<float.h>
int main()
{
    printf("data type\t bit width\t min value\t max value\n");
    printf("char\t\t %d\t\t%d\t\t%d\n",sizeof(char)*8,CHAR_MIN,CHAR_MAX);
    printf("int\t\t%d\t\t%d\t%d\n", sizeof(int)*8, INT_MIN,INT_MAX);
    printf("float\t\t%d\t\t%g\t%g\n",sizeof(float)*8, FLT_MIN,FLT_MAX);
    printf("double\t\t%d\t\t%g\t%g\n",sizeof(double)*8,DBL_MIN,DBL_MAX);
    return 0;
}

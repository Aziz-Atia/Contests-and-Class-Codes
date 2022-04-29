#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2;
    printf("enter any three values:\n");
    scanf("%f %f %f", &a,&b,&c);
    root1=(-b+sqrt(b*b-4*a*c))/(2*a);
    root2=(-b-sqrt(b*b-4*a*c))/(2*a);
    if(b*b>=4*a*c)
        printf("the values of root1 and root2 are %f, %f\n", root1,root2);
    else
        printf("the values are indeterminate.\n");
    return 0;
}

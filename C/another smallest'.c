#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any three values:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a<b &&a<c)
        printf("the smallest number is %d", a);
    if(b<a &&b<c)
        printf("the smallest number is %d", b);
    if(c<a && c<b)
        printf("the smallest number is %d", c);



    return 0;

}

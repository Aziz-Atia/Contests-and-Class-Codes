#include<stdio.h>
int main()
{
    int a,b,c,d,t;
    while(scanf("%d",&t))
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a==c &&b==d && a!=b && c!=d)
            printf("Rectangle\n");
        else if(a==b&&b==c&&c==d&&d==a)
            printf("Square\n");
        else if((a+b+c)>d)
            printf("Quadrangle\n");
        else
            printf("Banana\n");
    }
    return 0;
}

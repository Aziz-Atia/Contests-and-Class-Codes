#include<stdio.h>
int main()
{
    int x,y;
    x=5;
    y=50;
    while(x<=y)
    {

        x=y/x;
        printf("%d\n",x);
    }

    return 0;
}

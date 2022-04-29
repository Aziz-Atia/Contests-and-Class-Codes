#include<stdio.h>
int main()
{
    int x,y;
    x=10;
    y=7;
    while(x%y>=0)
    {
        x=x+1;
        y=y+2;
        printf("%d\n",x);
    }

    return 0;
}


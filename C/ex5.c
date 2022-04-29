#include<stdio.h>
int main()
{
    int x,y;
    for(x=5,y=50;x<=y;y=y/x)
    {
        printf("%d\n",y);
    }

    return 0;
}

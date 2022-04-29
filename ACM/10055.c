#include<stdio.h>
int main()
{
    int diff,a,b;
    while((scanf("%d%d",&a,&b)!=EOF))
    {
            if(b>a)
            {
                diff=b-a;
                printf("%d\n",diff);
            }
    }
    return 0;
}

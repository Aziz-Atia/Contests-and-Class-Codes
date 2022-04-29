#include<stdio.h>
int main()
{
    int t,n,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        if(a==0 && b==0)
        {
            return;
        }
        if(a<=b)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}

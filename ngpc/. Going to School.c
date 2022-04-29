#include<stdio.h>
int main()
{
    int t1,v1,t2,v2,s1,s2,s;
    while(scanf("%d %d %d %d",&t1,&v1,&t2,&v2))
    {
            s1=t1*v1;
            s2=t2*v2;
            s=s1+s2;
            printf("%d\n",s);
    }
    return 0;
}

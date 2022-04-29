#include<stdio.h>
int main()
{
    int t1,v1,t2,v2,s1,s2,s;
    scanf("%d %d %d %d",&t1,&v1,&t2,&v2);
    if(t1>=1&&t1<=100&&t2>=1&&t2<=100&&v1>=1&&v1<=100&&v2>=1&&v2<=100)
    {
        s1=t1*v1;
        s2=t2*v2;
        s=s1+s2;
        printf("%d\n",s);
    }
    else
        return;

    return 0;
}

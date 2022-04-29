#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,c,d,e,count,s[100];
    count=1;
    while(gets(s))
    {
        c=strcmp(s,"Hajj");
        if(c==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",count);
            count++;
        }
        d=strcmp(s,"Umrah");
        if(d==0)
        {
            printf("Case %d: Hajj-e-Asghar\n",count);
            count++;
        }
        e=strcmp(s,"*");
        if(e==0)
            return;
    }
    return 0;
}

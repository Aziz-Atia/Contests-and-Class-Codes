#include<stdio.h>
int w[10],p[10],o,n;
int main()
{
    int m,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&w[i]);
    }
     for(i=1;i<=n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Max??\n");
    scanf("%d",&m);
    o=knap(1,m);
    printf("Optimal Solution is %d\n",o);
    return 0;
}
int knap(int i,int m)
{
    if(i==n)
    {
        if(w[n]>m)
        {
            return 0;
        }
        else
            return p[n];
    }
    if(w[i]>m)
        return knap(i+1,m);
    if(knap(i+1,m)>knap(i+1,m-w[i])+p[i])
        return knap(i+1,m);
    else
        return knap(i+1,m-w[i])+p[i];
}

#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,n1,n2,b,m,a,n,j,k,gcd;
    scanf("%d",&t);
    for(j=1; j<=t; j++)
    {  gcd=0;
        scanf("%d%d%d",&a,&b,&m);
        for(k=0; k<=m; k++)
        {
            n1=a+k;
            n2=b+k;
            n=__gcd(n1, n2);
            if(n==1)
            {
                gcd++;
            }
        }
        printf("Case %d: %d\n",j,gcd);
    }
}


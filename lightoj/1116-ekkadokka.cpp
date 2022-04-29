#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,w,m,n,i,j,flag;
    cin>>t;
    if(t>10000)
    {
        return 0;
    }
    else
    {
        cin>>n;
        for(j=1;j<=t;j++)
        {
           for(i=2; i<=sqrt(n); i++)
            {
                if(n%i==0)
                {
                    flag=1;
                    cout<<"Case "<<j<<":"<<i<<endl;
                    break;

                }
            }
         }

    }
}

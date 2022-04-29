#include<stdio.h>
#include<stdlib.h>
int m,n;
void lcs_length(int m,int n);
void lcs_length(int m,int n)
{
    char c[100][100],x[100],y[100];
    int i,j,b[100][100];
    for(i=0;i<n;i++)
    {
        c[i][0]=0;
    }
    for(j=0;j<n;j++)
    {
        c[0][j]=0;
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(x[i]==y[i])
            {
                c[i][j]==c[i-1][j-1]+1;
                b[i][j]='^';
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]='|';
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j]='-';
            }
        }
    }
}
int main()
{
    char x[100],y[100];
    gets(x);
    gets(y);
    m=strln(x);
    n=strln(y);
    lcs_length(m,n);
    print("Largest common string is::\n");
    //puts();
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,a,b,c,l;
    char s1[200],s2[200],s,u;
    scanf("%d",&t);
    while(t--)
    {
        gets(s1);
        a=strlen(s1);
        b=0;
        for(i=1; i<=a; i++)
        {
            if(s1[i]>='A' && s1[i]<='Z')
            {
                if(s1[i]>='0' && s1[i]<='9')
                {
                    b=b+s1[i]-'0';
                    for(j=1; j<=b; j++)
                        printf("%c",s1[i]);
                }
            }
        }
    }
        return 0;
    }

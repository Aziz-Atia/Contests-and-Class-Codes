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
        for(i=1; i<=a; i++)
        {
            //printf("ase?\n");
            b=0;
            if(s1[i]<='9' && s1[i]>='0')
            {
                //printf("ashe?\n");

                b=b+s1[i]-'0';
                for(j=1; j<=b; j++)
                    printf("%c",s1[i-1]);
            }
            printf("\n");
        }
    }
    return 0;
}



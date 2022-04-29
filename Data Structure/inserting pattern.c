#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int l,i,p,k,n,n1,n2;
    printf("enter the strings::\n");
    gets(s1);
    gets(s2);
    n1=strlen(s1);
    n2=strlen(s2);
    printf("In which position you want to enter the string?\n");
    scanf("%d",&n);
    //max=n1-n2+1;
    for(k=1; k<=n1; k++)
    {
        p=0;
        if(k==n)
        {
            for(i=n1-1;i>=k;i--)
            {
                s1[i+n2]=s1[i];
            }
            while(p!=n2)
            {
                s1[k]=s2[p];
                p++;
                k++;
            }
        }

    }
    puts(s1[n1+n2]);
    l=n1+n2;
    l=strlen(s1);
    printf("Inserted string is :: \n");
    puts(s1);
}

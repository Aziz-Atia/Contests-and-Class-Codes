#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int str1[100],str2[100],str3[100],i,j,l,len;
    printf("Enter 1st word?\n");
    gets(str1);
    printf("enter 2nd string\n");
    gets(str2);
    l=strlen(str1);
    len=strlen(str2);
    for(i=1;i<=l;i++)
    {
        for(j=1;j<=len;j++)
        {
            if(str1[i]==str2[j])
                str1[i]=NULL;
                str2[j]=NULL;

        }
    }
    for(i=1;i<=l;i++)
        puts(str1);
    for(j=1;j<=len;j++)
        puts(str2);
    return 0;
}


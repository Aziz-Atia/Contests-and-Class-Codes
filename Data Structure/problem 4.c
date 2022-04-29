#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,l,j,len,str1[100],str2[100];
    printf("Enter 1st string:\n");
    while(gets(str1))
    {
        l=strlen(str1);
        for(i=1;i<=l;i++)
        {
            if(str1[i]==str1[i+1])
                str1[i]='X';
        }
        printf("Output::\n");
        puts(str1);
        printf("enter 2nd string: \n");
        gets(str2);
        len=strlen(str2);
        for(j=1;j<=len;j++)
        {
            if(str2[j]==str2[j+1])
                str2[j]='X' ;
        }
        printf("Output::\n");
        puts(str2);
    }
    return 0;
}

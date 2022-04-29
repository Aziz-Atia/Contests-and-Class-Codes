#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,l,len,str1[100],str2[100];
    printf("Enter 1st string:\n");
    while(gets(str1))
    {
        printf("enter 2nd string: \n");
        gets(str2);
        l=strlen(str1);
        len=strlen(str2);
        for(i=1;i<=l;i++)
        {
            if(str1[i]==str1[i+1])
                str1[i+1]='/';
        }
        printf("Output::\n");
        puts(str1);
    }
    return 0;
}

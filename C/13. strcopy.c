#include<stdio.h>
#include<string.h>

void strcopy (char dst[], char src[])
{
    int i,l;
    l=strlen(src);
    for(i=0;i<=l;i++)
        dst[i]=src[i];
}
int main()
{
    char str1[100],str2[100];
    printf("one string?\n");
    gets(str1);
    strcopy(str2,str1);
    printf("1st string is %s and copied string is %s\n", str1,str2);
}

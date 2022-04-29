#include<stdio.h>
#include<string.h>
void concat(char dst[],char src[])
{
    int i,l1,l2;
    l1=strlen(dst);
    l2=strlen(src);
    for(i=0;i<=l1-1;i++)
        dst[l2+i]=dst[i];
    for(i=0;i<l2;i++)
        dst[i]=src[i];
    dst[l1+l2]='\0';

}
main()
{
    char str1[100],str2[100];
    printf("1st string?\n");
    gets(str1);
    printf("enter 2nd string to be concatenated?\n");
    gets(str2);
    concat(str2,str1);
    printf("concatenated string is %s\n",str2);

}

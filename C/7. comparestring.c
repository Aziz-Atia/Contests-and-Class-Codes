#include<stdio.h>
#include<string.h>
int strcompare (char str1[], char str2[])
{
    int i, l,l1,l2;
    l1=strlen(str1);
    l2=strlen(str2);
    l=l1<l2?l1:l2;
    for(i=0;i<=l;i++)
    {
        if(str1[i]<str2[i])
            return -1;
        else if(str1[i]>str2[i])
            return 1;
    }
    return 0;
}
main()
{
    int status;
    char str1[100], str2[100];
    printf("first string?\n");
    gets(str1);
    printf("second string?\n");
    gets(str2);
    status=strcompare(str1,str2);
    if(status==-1)
        printf("1st string< 2nd string");
    else if(status==1)
        printf("2nd string<1st string");
    else
        printf("both are equal");

}

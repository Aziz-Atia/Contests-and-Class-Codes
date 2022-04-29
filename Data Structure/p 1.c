#include<stdio.h>
int main()
{
    int str1[100], str2[100];
    printf("Enter 1st String:\n");
    while(gets(str1))
    {
        printf("Enter 2nd string:\n");
        gets(str2);
        if(strcmp(str1,str2)==0)
            printf("correctly spelled \n");
        else
        {
            printf("wrong spelled string:: \n");
            puts(str2);
        }
    }
    return 0;
}

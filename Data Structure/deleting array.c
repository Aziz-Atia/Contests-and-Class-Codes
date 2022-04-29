#include<stdio.h>
#include<stdlib.h>
int main()
{

    char s1[10],s2[10];
    int k,index,n,n1,n2,max;
    printf("enter the strings::\n");
    gets(s1);
    gets(s2);
    n1=strlen(s1);
    n2=strlen(s2);
    printf("In which position you want to enter the string?\n");
    scanf("%d",&n);
    max=n1-n2+1;
    for(k=1;k<=max;k++)
    {
        if(s1[n1]!=s2(n1+n2-1))
        {
            k++;
            index=0;
        }
        else
            index=k;
    }
    printf("Deleted string is:: \n");
    puts(s1);
    return 0;
}


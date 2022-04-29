#include<stdio.h>
#include<string.h>
int main()
{
    char c[1000];
    int l,i,count;
    while(gets(c))
    {
        l=strlen(c);
        count=0;
        for(i=0; i<l; i++)
        {
            if(c[i]=='"')
            {
                count++;
                if(count%2==1)
                {
                    printf("``");
                }
                else if(count%2==0)
                {
                    printf("''");
                }
            }
            else
                printf("%c",c[i]);
        }
        printf("\n");
    }
    return 0;
}

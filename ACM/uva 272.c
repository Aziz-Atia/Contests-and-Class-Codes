#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    int i=1,count;

    while((ch=getchar())!=EOF)
    {
            if(ch=='"')
            {
                if(i==1)
                {
                    printf("``");
                    i++;
                }
              else  if(i==2)
                {
                    printf("''");
                    i=1;
                }
            }
            else
                printf("%c",ch);
        }
    return 0;
}

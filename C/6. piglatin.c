#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

    char s[100];
    int i, n;
    while (gets(s))
    {
        n=strlen(s);
        for(i=1; i<n; i++)
            printf("%c",s[i]);
        printf("%ca",s[0]);
        printf("\n");
        break;
    }
    getch();
    return 0;
}

#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char letter[80];
    char cletter[80];
    int digit=0,count=0;
    gets(letter);
    digit=strlen(letter);
    while(count<digit)
    {
        if(letter[count]>='A' && letter[count]<='Z')
            cletter[count]=toupper(letter[count]);
        else
            cletter[count]=tolower(letter[count]);

            count++;
    }
        puts(cletter);


    return 0;
}

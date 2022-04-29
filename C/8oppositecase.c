#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char letter[80];
    char cletter[80];
    int digit=0,count=0;
    printf("line of text?\n");
    gets(letter);
    digit=strlen(letter);
    while(count<digit)
    {
        if(letter[count]>='A' && letter[count]<='Z')
            cletter[count]=tolower(letter[count]);
        else if(letter[count]>='a' && letter[count]<='z')
            cletter[count]=toupper(letter[count]);

            count++;
    }
        puts(cletter);


    return 0;
}

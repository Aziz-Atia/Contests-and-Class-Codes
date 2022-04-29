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
        if(letter[count]>=65 && letter[count]<=90)
            cletter[count]=toupper(letter[count]);
        else if(letter[count]>=97 && letter[count<=122])
            cletter[count]=tolower(letter[count]);
            else
                printf("the value is not a char.\n");

            count++;
    }
        puts(cletter);


    return 0;
}

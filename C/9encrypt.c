#include<stdio.h>
int main()
{
    char line[70];
    int count;
    printf("input a line of text here:\n");
    scanf("%[^\n]",line);
    for(count=0;line[count]!='\0';++count)
    {
        if(((line[count]>='0' && line[count]<'9'))||((line[count]>='a' && line[count]<'z'))||((line[count]>='A' && line[count]<='Z')))
        putchar(line[count]+3);
    else if(line[count]=='9')
        putchar('0');
        else if(line[count]=='z')
            putchar('a');
            else if(line[count]=='Z')
            putchar('A');
        else
            putchar('.');
    }
    return 0;
}

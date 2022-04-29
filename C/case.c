#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    printf("enter any letter:\n");
    scanf("%c", &ch);
    if (ch>='a' && ch<='z')
    {
        ch=(toupper(ch));
        printf("the opposite case is %c", ch);
    }
    else if(ch>='A' && ch<='Z')
    {
        ch=(tolower(ch));
        printf("the opposite case is %c", ch);
    }
    return 0;
}

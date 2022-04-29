#include<stdio.h>
#define EOLN '\n'
void reverse(void);
int main()
{
    printf("enter a line of text:\n");
    reverse();
}
 void reverse(void)
{
    char c;
    c=getchar();
    if(c!=EOLN)
        reverse();
    putchar(c);
    return 0;
}

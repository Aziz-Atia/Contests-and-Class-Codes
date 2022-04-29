#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,l;
    printf("your string?\n");
    gets(str);
    l=strlen(str);
    printf("\nreverse string is::");/*i=l-1;i>=0;i--*/
    for(i=l-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;

}

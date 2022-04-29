#include<stdio.h>
#include<string.h>
int main()
{
    char letter[20];
    int i=0;
    int j=strlen(letter)-i-1;
    printf("enter a text\n");
    gets(letter);
    for(i=0;i<j;i++)
    {
        if(letter[i++]!=letter[j--]){
            printf("%s is not palindrome\n",letter);
            return 0;;
        }
    }
    printf("%s is palindrome\n", letter);
    return 0;
}

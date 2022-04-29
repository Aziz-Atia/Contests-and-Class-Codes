#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    printf("enter any letter:\n");
    scanf("%c", &ch);
    switch(tolower(ch))
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("the letter is vowel!\n");
        break;
    default:
        printf("it's a consonant!\n");
        break;
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char letter[20];
    int i=0;

    printf("enter a text\n");
    gets(letter);
    int length=strlen(letter);////ekhane amra strlen use kore string er length ber kollam
    for(i=0;i<length;i++){

        //////uporer lineta bujhanor jonno,code kivabe kaj kortese,important na
        if(letter[i]!=letter[length-i-1]){     ////jodi shamne theke start kora char mane letter[i] r pichon theke start kora char letter[length-i-1] ,
                                                //////porospor equal na hoy,tar mane palindrome na.And r check korar o dokkar nai
            printf("%s is not palindrome\n",letter);
            return 0;///////jehetu r check korar o dokkar nai,tai palindrome na diye return 0 diye ber hoye gelam direct
        }
    }
    printf("%s is palindrome\n",letter);   //////////jodi shob match kore tahole loop ta shesh kore ber hobe and palindrome print korbe

    return 0;
}

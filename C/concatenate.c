#include<stdio.h>
int main()
{
    char str1[20],str2[20],i,j;
    gets(str1);
    gets(str2);
    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[i]!='\0';j++,i++){
        str1[i]=str2[j];
    }
    str1[i]='\0';
    printf("%s",str1);

}

#include <iostream>
#include <string.h>
using namespace std;


void commstr(char s1[],char s2[])
{
    int countara1[26],countara2[26];
    for(int i=0;i<26;i++) countara1[i]=countara2[i]=0;

    for(int i=0;s1[i];i++) countara1[s1[i]-'a']++;
    for(int i=0;s2[i];i++) countara2[s2[i]-'a']++;

    //for(int i=0;i<26;i++) cout<<countara[i]<<endl;
    for(int i=0;i<26;i++)
    {
        if(countara1[i]>0 && countara2[i]>0)
        {
            int rep=countara1[i]<countara2[i]?countara1[i]:countara2[i];

            while(rep--) {char c=i+'a';cout<<c;}
        }

    }
    cout<<endl;

}

void substrct(char s1[],char s2[])
{
    int countara1[26],countara2[26];
    for(int i=0;i<26;i++) countara1[i]=countara2[i]=0;

    for(int i=0;s1[i];i++) countara1[s1[i]-'a']++;
    for(int i=0;s2[i];i++) countara2[s2[i]-'a']++;





    for(int i=0;i<26;i++)
    {
        if(countara1[i]>0 && countara2[i]>0)
        {
            int rep=countara1[i]<countara2[i]?countara1[i]:countara2[i];

            while(rep--) {countara1[i]--;countara2[i]--;}
        }

    }

    for(int i=0;s1[i];i++)
    {
        if(countara1[s1[i]-'a']>0 ) {countara1[s1[i]-'a']--;cout<<s1[i];}

    }
    cout<<" ";
    for(int i=0;s2[i];i++)
    {
        if(countara2[s2[i]-'a']>0 ) {countara2[s2[i]-'a']--;cout<<s2[i];}

    }



    cout<<endl;

}





void removeDuplicate(char str1[])
{
   // Used as index in the modified string
   int index = 0;

   char str[strlen(str1)];
   strcpy(str,str1);
   // Traverse through all characters
   for (int i=0; str[i]; i++) {

     // Check if str[i] is present before it
     int j;
     for (j=0; j<i; j++)
        if (str[i] == str[j])
           break;

     // If not present, then add it to
     // result.
     if (j == i)
        str[index++] = str[i];
   }
   str[index]='\0';

   cout<<str<<endl;
}

void xstr(char s1[])
{
    int countara1[26];
    for(int i=0;i<26;i++) countara1[i]=0;

    for(int i=0;s1[i];i++) countara1[s1[i]-'a']++;


    for(int i=0;s1[i];i++)
    {
        if(countara1[s1[i]-'a']>1 ) s1[i]='x';

    }
    cout<<s1;
    cout<<endl;

}





int main()
{
    char s1[]="misspell";
    char s2[]="expell";

    commstr(s1,s2);
    substrct(s1,s2);
    removeDuplicate(s1);
    xstr(s1);
    return 0;
}

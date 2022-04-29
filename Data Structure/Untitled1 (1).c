#include <stdio.h>
#include <string.h>
struct teebo
{
    char name[20];
    char address[50];
};
////structure banailam
int main()
{
    struct teebo tee[3];
////structure teebor ekta array banailam
    int i;
    for(i=0;i<3;i++)
    {
        gets(tee[i].name);
        gets(tee[i].address);
    }
///////input nilam
    for(i=0;i<2;i++)
    {
////ekhn sort korbo name onujayi.ejonno strcmp use korbo
        struct teebo temp;
        int check = strcmp(tee[i].name , tee[i+1].name);

        if(check>0)
        {
            temp=tee[i];
            tee[i]=tee[i+1];
            tee[i+1]=temp;
        }
////////sort kore nilam
    }
    for(i=0;i<3;i++)
    {
        printf("\n");
        puts(tee[i].name);
        puts(tee[i].address);
////////print korlam
    }
    return 0;

}

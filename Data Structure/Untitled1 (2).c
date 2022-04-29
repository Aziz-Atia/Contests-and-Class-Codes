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
    int n;
    printf("Enter number of objects:");
    scanf("%d",&n);


    getchar();
//////eta na dile n input deyar time e enter chaple eta name e dhuke jabe

    struct teebo tee[n];
////structure teebor ekta array banailam
    int i,j;
    for(i=0;i<n;i++)
    {
        gets(tee[i].name);
        gets(tee[i].address);
    }
///////input nilam
    for(i=0;i<n-1;i++)
    {
////ekhn sort korbo name onujayi.ejonno strcmp use korbo
        struct teebo temp;
        int check;

       for (j = 0; j < n-i-1; j++)
       {

        check = strcmp(tee[j].name , tee[j+1].name);
        if(check>0)
        {
            temp=tee[j];
            tee[j]=tee[j+1];
            tee[j+1]=temp;
        }
////////sort kore nilam
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n");
        puts(tee[i].name);
        puts(tee[i].address);
////////print korlam
    }
    return 0;

}

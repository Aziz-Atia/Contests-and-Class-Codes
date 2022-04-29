#include <stdio.h>
#include <string.h>
struct list
{
    char name[20];
    char address[50];
};
int main()
{
    int n,i,j,check;
    printf("Enter number of objects:");
    scanf("%d",&n);


    getchar();
//////eta na dile n input deyar time e enter chaple eta name e dhuke jabe

    struct list memb[n];
////structure teebor ekta array banailam

    for(i=0;i<n;i++)
    {
        gets(memb[i].name);
        gets(memb[i].address);
    }
///////input nilam
    for(i=0;i<n-1;i++)
    {
////ekhn sort korbo name onujayi.ejonno strcmp use korbo
        struct list temp;


       for (j = 0; j < n-i-1; j++)
       {

        check = strcmp(memb[j].name , memb[j+1].name);
        if(check>0)
        {
            temp=memb[j];
            memb[j]=memb[j+1];
            memb[j+1]=temp;
        }
////////sort kore nilam
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n");
        puts(memb[i].name);
        puts(memb[i].address);
////////print korlam
    }
    return 0;

}

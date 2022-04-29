#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct lilist
{
    int info ;
    struct lilist;
};
typedef struct lilist node;
int main()
{
    int n,item,i,count;
    node *strt, *ptr;
    start=(node*)malloc(sizeof(node));
    ptr=start;
    printf("\nEnter values and item::\n ");
    scanf("%d%d",&n,&item);
    printf("\nEnter Values::\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ptr->info);
    if(i!=n)
    {
        ptr->next=(node*)malloc(sizeof(node));
    }
    }

}


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int i,item,n;
void insertion();
struct lilist
{
    int info;
    struct lilist *next;
};
typedef struct lilist *node;
node *start,*ptr,*neu,*save,*loc,*next;
node *findA();
int main()
{
    start=(node*)malloc(sizeof(node));
    ptr=start;
    printf("Enter Number and Item::\n ");
    scanf("%d%d",&n,&item);
    printf("Enter values::\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",ptr->info);
        if(i!=n)
        {
            ptr->next=(node*)malloc(sizeof(node));
            ptr=ptr->next;
        }
    }
    ptr->next=0;
    findA();
    insertion();
    getch();

    return 0;

}
node *findA()
{
    if(start==0)
    {
        loc=0;
        return loc;
    }
    else if(m<start->info)
    {
        loc=0;
        return loc;
    }
    else
    {
        save=start;
        ptr=start->next;
        while(ptr!=0)
        {
            if(item<ptr->info)
            {
                loc=save;
                return loc;
            }
            else
            {
                save=ptr;
                ptr=ptr->next;
            }
        }
        if(ptr==0)
        {
            loc=save;
            return loc;
        }
    }

}
void insertion()
{
    neu=(node*)malloc(sizeof(node));
    neu->info=item;
    if(loc==0)
    {
        neu->next=start;
        start=neu;
    }
    else
    {
        neu->next=loc->next;
        loc->next=neu;
    }
    printf("\n\nThe linked listed numbers :");
    for(ptr=start;ptr!=0;ptr=ptr->next)
        printf("%d\n",ptr=ptr->info);

}

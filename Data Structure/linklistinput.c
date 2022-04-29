#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct lilist
{
    int info;
    struct lilist *next;
};
typedef struct lilist node;
int main()
{
    int n,i,item;
    node *start,*ptr;
    int count=0;
    start=(node*)malloc(sizeof(node));
    ptr=start;
    printf("\n How many inputs?\n");
    scanf("%d",&n);
    printf("\nEnter Item:\n");
    scanf("%d",&item);
    printf("Enter values::\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ptr->info);

    if(i!=n)
    {
        ptr->next=(node*)malloc(sizeof(node));
        ptr=ptr->next;
    }
    }
    ptr->next=0;
    printf("Traversed Linked List::\n");
    ptr=start;
    while(ptr!=n)
    {
        count++;
                printf("%d\n",ptr->info);
        ptr=ptr->next;
    }
    //count=0;
    ptr=start;
    while(ptr!=n)
    {
        if(ptr->info==item)
        {
           // count++;
            printf("Item found in index\n");
        }
        ptr=ptr->next;

    }
    return 0;
}




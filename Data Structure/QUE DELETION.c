#include<stdio.h>
int main()
{
    int i,n,item,front,rear,que[12];
    printf("n?\n");
    scanf("%d",&n);
     //{
     printf("front rear and item?\n");
     scanf("%d %d %d",&front, &rear, &item);
     printf("enter array::\n");

     for(i=front; i<=rear; i++)
    {
    scanf("%d",&que[i]);
    }
    if(front==0 && rear==0)
    {
    printf("Underflow\n");
    return ;
    }
    else if(front==rear)
    {
    front=0;
    rear=0;
    }
    else if(front==n)
    {
    front=1;
    }
    else
    {
    front=front+1;
    item=que[rear];
    }

    printf("Deleted Array is ::\n");
    for(i=front; i<=rear; i++)
        printf("%d ",que[i]);//}
    return 0;
}

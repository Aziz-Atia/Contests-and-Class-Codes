#include<stdio.h>
int i,front=0,rear=0,que[10],n,t,item;
int main()
{

    printf("Enter n?\n");
    scanf("%d",&n);
    printf("\tMain Menu::\n");
    printf("\t\tEnter 1 for Insertion\n\t\tEnter 2 for Deletion\n\t\tEnter 3 for Exit\n");
    while(scanf("%d",&t)==1)
    {
        if(t<1 || t>3)
            printf("\tInvalid Choice\n");

        switch (t)
        {
        case 1:
            if(t==1)
            {
                printf("Enter Item::\n");
                scanf("%d",&item);
            }
            insertion();
            break;
        case 2:
            deletion();
            break;
        case 3:
            return 0;

        }
    }

}
void insertion()
{
    if(front==1 && rear==n || front==rear+1)
            {
                printf("Overflow\n");
                return ;
            }

            if(front==0 && rear==0)
            {
                front=1;
                rear=1;
            }
            else if(rear==n)
            {
                rear=1;
            }

            else
            {
                rear=rear+1;
            }
            que[rear]=item;
            printf("Display::\n");
            printf("\n\tInserted Array is ::\n\n");
            for(i=1; i<=n; i++)
                printf("%d ",que[i]);
            printf("\n");
}
deletion()
{
   if(front==0 && rear==0)
            {
                printf("Underflow\n");
                return ;
            }
            item=que[front];
            if(front==rear)
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
            printf("Display::\n");
            printf("\tDeleted Array is ::\n");
            for(i=front; i<=rear; i++)
                printf("%d ",que[i]);
            printf("\n");
}

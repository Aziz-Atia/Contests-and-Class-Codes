#include<stdio.h>
int i,maxstack,top,item,stack[20];
int main()
{
    printf("enter top,item and maxstack ?\n");
    while(scanf("%d %d %d",&top, &item, &maxstack)==3)
    {
        printf("enter stack::\n");
        for(i=0; i<top; i++)
            scanf("%d",&stack[i]);
        push();
        printf("Inserted Array is ::\n");
        for(i=0; i<top; i++)
            printf("%d\n",stack[i]);
        pop();
        printf("Deleted Array is ::\n");
        for(i=0; i<top; i++)
            printf("%d\n",stack[i]);
        return 0;
    }
}
void push()
{
    if(top==maxstack)
    {
        printf("overflow\n");
        return;
    }
    top=top+1;
    stack[top]=item;
}
void pop()
{
    if(top==0)
    {
        printf("underflow\n");
        return;
    }
    item=stack[top];
    top=top-1;
}

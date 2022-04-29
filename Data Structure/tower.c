#include<stdio.h>
int n;
char aux,beg,end;
int main ()
{
    printf("enter disc number\n");
    scanf("%d",&n);

    tower(n,'A','B','C');

    return 0;
}
void tower (int n,char beg, char aux, char end)
{
    if(n==1)
    {
        printf("%c->%c\n",beg,end);
        return;
    }
    tower(n-1,beg,end,aux);
        printf("%c->%c\n",beg,end);
    tower(n-1,aux,beg,end);
    return;
}

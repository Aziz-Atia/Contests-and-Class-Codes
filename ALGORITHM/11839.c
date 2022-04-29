#include<stdio.h>
int main()
{
    int a,b,c,d,e,t,count=0;
    char x;
   while(scanf("%d",&t))
   {
       if(t==0)
       break;


    while(t--)
    {
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        if(a<=127)
        {

            count++;
            x='a';
        }
        if(b<=127)
        {

           count++;
           x='b';

        }
        if(c<=127)
        {

           count++;
           x='c';
        }
        else if(d<=127)
        {

           count++;
           x='d';
        }
        if(e<=127)
        {

        count++;
        x='e';

        }
        if(count==1)
        {
           printf("%c\n",x);
        }
        else
        {
          printf("*\n");
        }

    }
   }
   return 0;
}

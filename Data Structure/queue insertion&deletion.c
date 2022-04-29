#include<stdio.h>
int main()
{
    int qi[100],n,f,r,item,i,qd[100],x;
    printf("enter the value of n::\n");
    while(scanf("%d",&n)==1)
    {

                    for(i=1;i<=n;i++)
                    {
                        //scanf("%d",&qi[i]);
                        qi[i]=0;
                    }

                     printf("enter the value of f,r and item::\n");
                     scanf("%d %d %d",&f,&r,&item);
                    printf("input array::\n");
                    for(i=f;i<=r;i++)
                    {
                        scanf("%d",&qi[i]);
                    }
                    printf("if insert press 1 if delete press 2::");
                    scanf("%d",&x);
                    switch(x)
                    {

                    case 1:
                                    if(f==1&&r==n||f==r+1)
                                    {
                                        printf("OVERFLOW");
                                        return 0;
                                    }

                                    else if(f==0)
                                    {
                                        r=1;
                                        f=1;
                                    }
                                    else if(r==n)
                                    {
                                        r=1;
                                    }
                                    else
                                    {
                                        r=r+1;
                                    }
                                    qi[r]=item;
                                    printf("\n");
                                    printf("inserted array::\n");
                                    for(i=1;i<=n;i++)
                                    {
                                        printf("%d ",qi[i]);
                                    }
                                    break;
                    case 2:
                                    if(f==0)
                                    {
                                        printf("UNDERFLOW");
                                        return ;
                                    }
                                    item=qd[f];
                                    if(f==r)
                                    {
                                        f=0;
                                        r=0;
                                    }
                                    else if(f==n)
                                    {
                                        f=1;
                                    }
                                    else
                                    {
                                        f=f+1;
                                    }

                                    printf("\n");
                                    printf("deleted array::\n");
                                    for(i=f;i<=n;i++)
                                    {
                                        printf("%d ",qd[i]);
                                    }
                                    break;

                            }
    }
    return 0;
}

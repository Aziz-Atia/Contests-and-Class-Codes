#include<stdio.h>
int m,n;
int main()
{
    int x;
    printf("Value of M and N?\n");
    scanf("%d%d",&m,&n);
    x= a(m,n);
    printf("x= %d ",x);

}
int  a(int m,int n)
{
    if(m==0)
    {
        printf("%d ",n+1);

        return n+1;
        //printf("a(%d,%d)=%d",m,n,n+1);
    }
    else if(m!=0 && n==0)
    {
        a(m-1,1);
        // printf("a(%d,%d)=a(%d,%d)",m,n,m-1,1);
    }
    else if(m!=0 && n!=0)
    {
        a(m-1,a(m,(n-1)));
        // printf("a(%d,%d)=a(%d,a(%d,(%d-1))",m,n,m-1,m,m-1);
    }
    //  return ;
}

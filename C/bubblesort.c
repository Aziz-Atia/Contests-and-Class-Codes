#include<stdio.h>
int main()
{
    int i,j,n,t,x[10];
    printf("n?\n");
    scanf("%d", &n);
    for(i=0;i<n;i++)
        for(j=0;j<n-i;j++)
        {
          if(x[j]>x[j+1])
          {
              t=x[j];
              x[j]=x[j+1];
              x[j+1]=t;
          }
          printf("%d",x[j]);
        }

}

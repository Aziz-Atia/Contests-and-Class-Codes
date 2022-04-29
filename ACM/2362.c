#include<stdio.h>
int main()
{
    double a[12],sum,avg;
    int i;
    for(i=1; i<=12; i++)
    {
        while((scanf("%ld",&a[i]))!=EOF)
        {
            sum=0;
            for(i=1; i<=12; i++)
            {
                sum=sum+i;
            }
            avg=sum/12;
            printf("$%ld",avg);
        }
    }
}

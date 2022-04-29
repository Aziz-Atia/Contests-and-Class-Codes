#include<stdio.h>
int main()
{
    float i,n,sum,avg;
    int c=0;
    i=0;
    sum=0;
    printf("enter the value of n:\n");
    scanf("%f", &n);
    for(i=1;i<=n;i=i+3){
        sum=sum+i;
        c++;
    }
    avg=sum/c;
    printf("sum is %f and avg is %f\n", sum, avg);
    return 0;
}

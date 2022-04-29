#include<stdio.h>
int main()
{
    float i,n,sum,avg;
    i=1;
    sum=0;
    printf("enter the value of n:\n");
    scanf("%f", &n);
    for(i=1;i<=n;i++){
       sum=sum+i;
    }
     avg=sum/n;
    printf("sum is %f and average is %f\n", sum, avg);


    return 0;
}


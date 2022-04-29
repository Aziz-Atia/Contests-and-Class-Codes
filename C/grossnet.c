#include<stdio.h>
int main()
{
    float h, r, gross, net, tax;
    printf("please enter your working hour and rate per hour:\n");
    scanf("%f %f", &h, &r);
    gross=h*r;
    if(gross>5000)
    {
        tax=gross*0.05;
        net=gross-tax;
        printf("your gross is %f net is %f\n",gross, net);
    }
    else
    {
        net=gross;
        printf("your gross is %f net is %f and you have no tax.\n", gross, net);
    }
    return 0;
}

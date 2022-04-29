#include<stdio.h>
int main()
{
    char name[10];
    float unit, unit1, unit2, unit3, cost;
    printf("please enter your name and the unit you have used this month:\n");
    scanf("%s %f", name, &unit);
    if(unit<=100)
        unit1=unit;
    else if (unit>100 && unit<=300){
        unit1=100;
        unit2=unit-unit1;
        }
    else if(unit>300){
        unit1=100;
        unit2=200;
        unit3=unit-(unit1+unit2);
    }
    cost=unit1*1.75+unit2*2.25+unit3*3.5;
    {

    if(cost>1000){
        cost=cost+cost*0.15;
        printf("%s , your cost is %f\n", name, cost);
    }
    else if(cost<100){
        cost=100;
        printf("%s , your cost is %f\n", name, cost);
    }
    }
    return 0;
}


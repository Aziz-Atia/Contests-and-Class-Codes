#include<stdio.h>
int main()
{
    char p1,p2;
    printf("player 1, please enter 'r' for rock,, 'p' for paper and 's' for scissor:\n");
    scanf("%c", &p1);
    fflush(stdin);
    printf("player 2, please enter 'r' for rock, 'p' for paper and 's' for scissor:\n");
    scanf("%c", &p2);
    if(p1=='p' && p2=='r')
        printf("p1 winner\n");
    else if(p1=='r' && p2=='p')
        printf("p2 winner\n");
    else if(p1=='r' &&p2=='s')
        printf("p1 winner\n");
    else if(p1=='s' && p2=='r')
        printf("p2 winner\n");
    else if(p1==p2)
        printf("its a draw\n");
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fpt;
    int i,r;
    fpt=fopen("RAND.DAT","w");
    for(i=0; i<100; i++)
    {
        r=(rand()%100+1);
        fprintf(fpt,"%d\n",r);
    }
    fclose(fpt);
    fpt=fopen("RAND.DAT", "r");
    fscanf (fpt, "%d", &i);

    while (!feof (fpt))
    {
        printf ("%d\t", i);
        fscanf (fpt, "%d", &i);
    }
    fclose(fpt);
    return 0;
}

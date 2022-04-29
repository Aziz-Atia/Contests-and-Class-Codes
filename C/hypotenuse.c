#include<stdio.h>
#include<math.h>
int main()
{
    float orthrogonal,base,hypotenuse;
    printf("ENTER THE VALUES OF ORTHROGONAL AND BASE:\n");
    scanf("%f %f", &orthrogonal, &base);
    hypotenuse=sqrt((orthrogonal*orthrogonal)+(base*base));
    printf("THE LENGTH OF HYPOTENUSE IS %f\n", hypotenuse);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, j, temp;
    int *a;
    printf("Total Numbers to sort  : \n");
    scanf("%d", &n);
    a = (int *) malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(a + i) > *(a + j))
            {
                temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(a + i));
    }

    return 0;
}


#include<stdio.h>
#include<math.h>
int  board[20],count;
int main()
{
    int n,i,j;
    void queen(int row,int n);
    printf("\n- N-Queens problem using backtracking-\n\n Enter number of queen::\n\n");
    scanf("%d",&n);
    queen(1,n);
    return 0;
}
void print(int n)
{
    int i,j;
    printf("\n\n Solution %d\t",++count);
    for(i=1; i<=n; i++)
    {
        printf("\t%d",i);
    }
    for(i=1; i<=n; i++)
    {
        printf("\n\n%d",i);
        for(j=1; j<=n; j++)
        {
            if(board[i]==j)
            {
                printf("\tQ");
            }
            else
                printf("\t-");
        }
    }
}
int place(int row, int colum)
{
    int i;
    for(i=1; i<=row-1; i++)
    {
        if(board[i]==colum)
        {
            return 0;
        }
        else if(abs(board[i]-colum)==abs(i-row))
        {
            return 0;
        }
        return 1;
    }
}
void queen(int row,int n)
{
    int colum;
    for(colum=1; colum<=n; colum++)
    {
        if(place(row,colum))
        {
            board[row]=colum;
            if(row==n)
                print(n);
            else
                queen(row+1,n);
        }
    }
}

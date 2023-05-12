#include <stdio.h>
int main()
{
    int row, col, flag = 0;
    scanf("%d%d", &row, &col);
    int ar[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    for (int i = row - 1;; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", ar[i][j]);
        }
        break;
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = col - 1;; j++)
        {
            printf("%d ", ar[i][j]);
            break;
        }
    }

    return 0;
}
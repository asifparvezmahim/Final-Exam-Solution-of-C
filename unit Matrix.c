#include <stdio.h>
int main()
{
    int flag = 0, n;
    scanf("%d", &n);
    int ar[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (ar[i][j] != 1)
                {
                    flag = 1;
                }
            }

            else if (ar[i][j] != 0)
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}
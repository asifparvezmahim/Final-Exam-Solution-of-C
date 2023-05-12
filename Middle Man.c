#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ind = n / 2;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    if (n % 2 == 0)
    {
        printf("%d %d", ar[ind - 1], ar[ind]);
    }
    else
    {
        printf("%d", ar[ind]);
    }
    return 0;
}
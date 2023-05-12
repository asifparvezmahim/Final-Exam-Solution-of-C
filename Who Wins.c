#include <stdio.h>
int main()
{
    int n, tig = 0, pat = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int t, p;
        scanf("%d%d", &t, &p);
        if (t > p)
        {
            tig++;
        }
        else if (t < p)
        {
            pat++;
        }
    }

    if (tig > pat)
        midd
        {
            printf("Tiger\n");
        }

    else if (tig < pat)
    {
        printf("Pathan\n");
    }

    else
    {
        printf("Draw\n");
    }
    return 0;
}

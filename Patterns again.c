
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sp = n - 1;
    int sign = 1;
    for (int i = 0; i < n; i++)
    {
        // space printing
        for (int j = 0; j < sp; j++)
        {
            printf(" ");
        }

        // sign printing
        if (i % 2 == 0)
        {
            for (int j = 0; j < sign; j++)
            {
                printf("^");
            }
        }

        else
        {
            for (int j = 0; j < sign; j++)
            {
                printf("*");
            }
        }
        printf("\n");
        sp--;
        sign += 2;
    }
    return 0;
}

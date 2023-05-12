#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        long long int sum, res, x, y, z, total;
        scanf("%d%d%d%d", &total, &x, &y, &z);
        sum = x + y + z;
        res = total - sum;
        printf("%d\n", res);
    }
    return 0;
}
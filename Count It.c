#include <stdio.h>
int main()
{
    char s[1005];
    int capital = 0, small = 0, space = 0;
    fgets(s, 1005, stdin);
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            capital++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            small++;
        }
        else
        {
            space++;
        }
        i++;
    }

    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d", space);
    return 0;
}
#include <stdio.h>
int main()
{
    int t, n_1, n_2, i, sum = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &n_1, &n_2);
        if (n_2 % 2 == 0)
        {
            sum = 0;
        }
        else
        {
            sum = n_1;
        }
        printf("%d\n", sum);
    }
    return 0;
}
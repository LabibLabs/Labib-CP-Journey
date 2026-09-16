#include <stdio.h>
int mini(int *p, int n)
{
    int min = p[0];
    for (int i = 1; i < n; i++)
    {
        if (min > p[i])
        {
            min = p[i];
        }
    }
    return min - 1;
}
int main()
{
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int c = 0;
        scanf("%d", &n);
        int num[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &num[j]);
        }
        if (n == 1)
        {
            printf("%d\n", n - 1);
            continue;
        }
        int min = mini(num, n);
        for (int j = 0; j < n - 1; j++)
        {
            if (num[j] == min)
                continue;
            for (int k = j + 1; k < n; k++)
            {
                if (num[k] == min)
                    continue;
                if (num[j] > num[k])
                {
                    c++;
                    num[k] = min;
                }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
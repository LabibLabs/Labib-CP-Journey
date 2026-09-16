#include <stdio.h>
int maxi(int *p, int n)
{
    int max = p[0];
    for (int i = 1; i < n + 1; i++)
    {
        if (max < p[i])
        {
            max = p[i];
        }
    }
    return max;
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int l, a, b;
        scanf("%d%d%d", &l, &a, &b);
        int num[l + 1];
        for (int j = 0; j < l + 1; j++)
        {
            num[j] = (a + b * j) % l;
        }
        int max = maxi(num, l);
        printf("%d\n", max);
    }
    return 0;
}
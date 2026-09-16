#include <stdio.h>
int main()
{
    int n, min, max;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    min = num[n - 1];
    max = num[0];
    int minin = n - 1, maxin = 0;
    for (int i = 1; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
            maxin = i;
        }
        if (num[n - i - 1] < min)
        {
            min = num[n - i - 1];
            minin = n - 1 - i;
        }
    }
    int r;
    if (maxin > minin)
    {
        r = maxin + n - 2 - minin;
    }
    else
    {
        r = maxin + n - 1 - minin;
    }
    printf("%d", r);
}
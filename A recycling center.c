#include <stdio.h>
int main()
{
    int i, ce = 0, j, k, cu, n, t, c;
    scanf("%d", &t);
    for (int l = 0; l < t; l++)
    {
        cu = 0;
        scanf("%d%d", &n, &c);
        double tbw[n], know[n], max;
        for (i = 0; i < n; i++)
        {
            scanf("%lf", &tbw[i]);
            know[i] = 0;
        }
        for (i = 0; i < n; i++)
        {
            max = 0;
            ce = 0;
            for (j = 0; j < n; j++)
            {
                if (know[j] == 1)
                {
                    continue;
                }
                if (tbw[j] <= c)
                {
                    if (max < tbw[j])
                    {
                        k = j;
                        ce = 1;
                        max = tbw[j];
                    }
                }
            }
            if (ce == 1)
            {
                know[k] = 1;
                cu++;
            }
            for (j = 0; j < n; j++)
            {
                if (know[j] == 1)
                {
                    continue;
                }
                tbw[j] = tbw[j] * 2;
            }
        }
        printf("%d\n", n - cu);
    }
    return 0;
}

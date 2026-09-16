#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, k, c = 0, cu = 0, tr = 0;
        scanf("%d%d", &a, &k);
        int num[a];
        for (int j = 0; j < a; j++)
        {
            scanf("%d", &num[j]);
        }
        for (int j = 0; j < a; j++)
        {
            if (num[j] == 1 || tr == k)
            {
                tr = 0;
                c = 0;
                continue;
            }
            else if (num[j] == 0)
            {
                c++;
            }
            if (c == k)
            {
                cu++;
            }
            tr++;
        }
        printf("%d\n", cu);
    }
    return 0;
}
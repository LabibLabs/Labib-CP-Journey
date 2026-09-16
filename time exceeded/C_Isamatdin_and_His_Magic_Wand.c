#include <stdio.h>
void sort(int *num, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, cu = 0;
        scanf("%d", &n);
        int num[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &num[j]);
            if (num[j] % 2 == 0)
            {
                cu++;
            }
        }
        if (cu == 0 || cu == n)
        {
            for (int j = 0; j < n; j++)
                printf("%d ", num[j]);
        }
        else
        {
            sort(num, n);
            for (int j = 0; j < n; j++)
            {
                printf("%d ", num[j]);
            }
        }
    }
    return 0;
}
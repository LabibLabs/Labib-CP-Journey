#include <stdio.h>
int main()
{
    int m, n, count;
    scanf("%d%d", &m, &n);
    count = m * n;
    if (count % 2 == 1)
    {
        count = count - 1;
    }
    printf("%d\n", count / 2);
}
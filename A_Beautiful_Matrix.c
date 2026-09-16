#include <stdio.h>
int main()
{
    int r, c, cr, cc;
    int num[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &num[i][j]);
            if (num[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }
    r = 2 - r;
    c = 2 - c;
    if (r < 0)
    {
        r = r * (-1);
    }
    if (c < 0)
    {
        c = c * (-1);
    }
    printf("%d\n", r + c);
}
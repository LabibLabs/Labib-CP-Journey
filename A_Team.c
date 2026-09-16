#include <stdio.h>
int main()
{
    int t, c = 0, count = 0;
    ;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        c = 0;
        int num[3];
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &num[j]);
        }
        for (int j = 0; j < 3; j++)
        {
            if (num[j] == 1)
            {
                c++;
            }
        }
        if (c >= 2)
        {
            count++;
        }
    }
    printf("%d\n", count);
}
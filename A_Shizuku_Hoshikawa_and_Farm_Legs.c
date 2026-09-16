#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 2)
        {
            printf("1\n");
        }
        else if (n % 2 == 0)
        {
            printf("%d\n", (n / 4) + 1);
        }
        else
        {
            printf("%d\n", 0);
        }
    }
    return 0;
}
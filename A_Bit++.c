#include <stdio.h>
int main()
{
    int t, count = 0;
    scanf("%d", &t);
    getchar();
    for (int i = 0; i < t; i++)
    {
        char bit[5];
        fgets(bit, 5, stdin);
        if (bit[0] == '+' || bit[1] == '+' || bit[2] == '+')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    printf("%d\n", count);
}
#include <stdio.h>
int main()
{
    int c, m = 0, n = 0, l = 0;
    char num[101], nu[101];
    fgets(num, 100, stdin);
    for (int i = 0; i < 100; i++)
    {
        if (num[i] == '1')
        {
            m++;
        }
        else if (num[i] == '2')
        {
            n++;
        }
        else if (num[i] == '3')
        {
            l++;
        }
    }
    c = (m + n + l) * 2;
    for (int i = 0; i < c; i += 2)
    {
        if (i < 2 * m)
        {
            nu[i] = '1';
        }
        else if (i < 2 * (m + n))
        {
            nu[i] = '2';
        }
        else if (i < 2 * (m + n + l))
        {
            nu[i] = '3';
        }
        if (!(i == (m + n + l) * 2 - 2))
        {
            nu[i + 1] = '+';
        }
        else
        {
            nu[i + 1] = '\0';
        }
    }
    printf("%s", nu);
}
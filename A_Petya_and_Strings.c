#include <stdio.h>
#include <string.h>
int main()
{
    char str_1[110];
    char str_2[110];
    fgets(str_1, 110, stdin);
    fgets(str_2, 110, stdin);
    int i = 0;
    while (str_1[i] != '\n' && str_1[i] != '\0')
    {
        char c = str_1[i];
        char p = str_2[i];
        if (c >= 'A' && c <= 'Z')
            c += 32;
        if (p >= 'A' && p <= 'Z')
            p += 32;
        if (c < p)
        {
            printf("-1");
            return 0;
        }
        if (c > p)
        {
            printf("1");
            return 0;
        }
        i++;
    }
    printf("0");
    return 0;
}
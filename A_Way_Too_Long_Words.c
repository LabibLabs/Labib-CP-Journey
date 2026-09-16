#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    for (int i = 0; i < t; i++)
    {
        char word[102];
        fgets(word, 102, stdin);
        int num = strcspn(word, "\n");
        if (num > 10)
        {
            printf("%c%d%c\n", word[0], num - 2, word[num - 1]);
        }
        else
        {
            puts(word);
        }
    }
    return 0;
}
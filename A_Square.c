#include<stdio.h>
int main()
{
    int t,a,b,c,d;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a==b&&b==c&&c==d)
        {
            printf("yes\n");
        }
        else
            printf("no\n");
    }
    return 0;
}

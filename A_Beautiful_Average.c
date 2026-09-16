#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,m=2;
        float max;
        scanf("%d",&n);
        float num[n];
        for(int j=0;j<n;j++)
        {
            scanf("%f",&num[j]);
        }
        max=num[0];
        for(int j=0;j<n;j++)
        {
            int c=2;
            for(int k=j;k<n-1;k++)
            {

                if(max<((max*(m-1))+num[k+1])/m)
                {
                    max=(max*(m-1)+num[k+1])/m;
                    c++;
                    m=c;
                }
                else
                {
                    m=c;
                    break;
                }
            }
        }
        printf("%.2f",max);
    }
    return 0;
}

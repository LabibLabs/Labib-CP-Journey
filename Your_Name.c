#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0; i<t; i++)
    {
        int a,c=0;
        scanf("%d",&a);
        getchar();
        char str_1[a+1];
        char str_2[a+1];
        int know[a+1];
        fgets(str_1,a+1,stdin);
        getchar();
        fgets(str_2,a+1,stdin);
        for(int j=0; j<a+1; j++)
        {
            know[j]=0;
        }
        for(int j=0; j<a+1; j++)
        {
            for(int k=0; k<a+1; k++)
            {
                if(know[k]==1)
                    continue;
                if(str_2[j]==str_1[k])
                {
                    c++;
                    know[k]=1;
                    break;
                }
            }
        }
        if(c==a+1)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }

    }
}

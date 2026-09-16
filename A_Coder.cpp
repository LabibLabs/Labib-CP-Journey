#include<iostream>
using namespace std;
int main()
{
    int n,co=0,c=0;
    string po;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    co++;
                    po += 'C';
                }
                else
                {
                    po += '.';
                }
            }
            else 
            {
                if(j%2==1)
                {
                    co++;
                    po += 'C';
                }
                else
                {
                    po += '.';
                }
            }
            if(j==n-1)
            {
                po += '\n';
            }
        }
    }
    cout << co << '\n';
    cout << po << '\n';
        return 0;
}
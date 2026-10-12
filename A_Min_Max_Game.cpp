#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test;t++)
    {
        int n, be=0, el=0;
        cin >> n;
        int x;
        vector<int> num;
        for (int i = 0; i < n;i++)
        {
            cin >> x;
            if(x==1)
            {
                be++;
            }
            else
            {
                el++;
            }

            num.push_back(x);
        }

        if(be>=el)
        {
            cout << "Bessie" << '\n';
        }
        else 
        {
            cout << "Elsie" << '\n';
        }
    }
    return 0;
}
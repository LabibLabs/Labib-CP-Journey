#include<iostream>
#include<vector>
using namespace std;
vector<int> num;
vector<int> posi;
int main()
{
    int t;
    cin >> t;
    for(int te=0;te<t;te++)
    {
        int n,k;
        cin >> n >> k;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin >> x;
            num.push_back(x);
            if(x==1)
                posi.push_back(i);
        }
        vector<bool> visited(posi.size(), false);
        if(posi.size()%2==1)
        {
            cout << "NO" << '\n';
            continue;
        }
        else
        {
            for (int i = 0; i < posi.size() - 1;i++)
            {
                if(visited[i]==true)
                    continue;
                else
                {
                    int c = posi[i];
                    for (int j = i + 1; j < posi.size();j++)
                    {
                        if(c+k==posi[j])
                        {
                            visited[i] = true;
                            visited[j] = true;
                            break;
                        }
                    }
                }
            }
            bool flag = false;
            for (int i = 0; i < posi.size();i++)
            {
                if(visited[i]==false)
                {
                    flag = true;
                }
            }
            if(flag)
            {
                cout << "NO" << '\n';
            }
            else
            {
                cout << "Yes" << '\n';
            }
        }
    }
}
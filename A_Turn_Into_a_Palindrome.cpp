#include<iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test;t++)
    {
        int n,count=0;
        char s;
        cin >> n >> s;
        string st;
        cin >> st;

        for (int i = 0; i < n / 2;i++)
            {
                if(st[i]==st[n-i-1])
                {
                    continue;
                }

                else
                {
                    if(st[i]==s||st[n-i-1]==s)
                    {
                        count++;
                    }

                    else
                    {
                        count += 2;
                    }
                }
            }

        cout << count << '\n';
    }
}

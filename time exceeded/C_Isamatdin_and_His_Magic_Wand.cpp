
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, cu = 0;
        cin >> n;

        vector<int> num(n);

        for (int j = 0; j < n; j++) {
            cin >> num[j];

            if (num[j] % 2 == 0) {
                cu++;
            }
        }

        if (cu != 0 && cu != n) {
            sort(num.begin(), num.end());
        }

        for (int j = 0; j < n; j++) {
            cout << num[j] << (j == n - 1 ? '\n' : ' ');
        }
    }

    return 0;
}

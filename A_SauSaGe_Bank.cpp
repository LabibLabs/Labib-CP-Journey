#include <iostream>
using namespace std;

int powerMultiplication(int n, int k) {
  int res = 1;
  for (int i = 0; i < (n - k + 1); i++) {
    res *= 2;
  }

  return res;
}

int leftOverMultiplication(int k) {
  int res = 0;
  for (int i = k; i > 0; i--) {
    res += 2;
  }

  return res;
}

int main() {
  int test;
  cin >> test;
  for (int t = 0; t < test; t++) {
    int n, k;
    cin >> n >> k;

    int res = powerMultiplication(n, k) + leftOverMultiplication(k - 1);

    cout << res << '\n';
  }

  return 0;
}
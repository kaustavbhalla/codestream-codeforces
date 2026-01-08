#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;

  while (t--) {
    long long n, a;
    cin >> n >> a;

    vector<long long> vec(n);
    long long b;

    for (long long i = 0; i < n; i++) {
      cin >> vec[i];
    }

    int leftCount = 0;
    int rightCount = 0;

    for (auto x : vec) {
      if (x < a) {
        leftCount++;
      } else if (x > a) {
        rightCount++;
      }
    }

    if (leftCount == 0 && rightCount == 0) {
      cout << 0 << "\n";
      continue;
    }

    if (leftCount >= rightCount) {
      long long vk = vec[leftCount - 1];
      b = (2 * vk - a + 1);
    } else {
      long long vk = vec[leftCount];
      b = (2 * vk - a - 1);
    }

    b = max(0LL, min(b, 2000000000LL));

    cout << b << "\n";
  }
}

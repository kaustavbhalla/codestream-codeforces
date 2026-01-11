#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    if (a.size() == 1) {
      if (2 * (x - a[0]) > a[0]) {
        cout << 2 * (x - a[0]) << "\n";
      } else {
        cout << a[0] << "\n";
      }

      continue;
    }

    int diff = 0;
    for (int i = 1; i <= n - 1; i++) {
      int current = a[i] - a[i - 1];
      if (current > diff) {
        diff = current;
      }
    }

    int end = 2 * (x - a[n - 1]);
    if (diff >= end && diff >= a[0]) {
      cout << diff << "\n";
    } else if (end >= diff && end >= a[0]) {
      cout << 2 * (x - a[n - 1]) << "\n";
    } else {
      cout << a[0] << "\n";
    }
  }
}

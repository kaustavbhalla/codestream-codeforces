#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  if (n % 2 == 0) {
    int xorValue = 0;

    for (int i = 0; i < n; i++) {
      xorValue ^= a[i];
    }

    if (xorValue == 0) {
      cout << 0 << "\n";
    } else {
      cout << -1 << "\n";
    }

  } else {
    int xorValue2 = 0;

    for (int i = 0; i < n; i++) {
      xorValue2 ^= a[i];
    }

    cout << xorValue2 << "\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}

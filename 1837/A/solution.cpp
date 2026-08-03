#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x;
  int k;

  cin >> x >> k;

  if (x % k != 0) {
    cout << 1 << "\n";
    cout << x << "\n";
  } else {
    if (k % 2 == 0) {
      cout << 2 << "\n";
      cout << x - 3 << " ";
      cout << 3 << "\n";
    } else {
      cout << 2 << "\n";
      cout << x - 2 << " ";
      cout << 2 << "\n";
    }
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

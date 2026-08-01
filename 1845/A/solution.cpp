#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  int k;
  int x;

  cin >> n >> k >> x;

  if (x != 1) {
    cout << "YES\n";
    cout << n << "\n";

    for (int i = 0; i < n; i++) {
      cout << 1 << " ";
    }
    cout << "\n";
  } else {
    if (n % 2 == 0) {
      if (k % 2 == 0) {
        cout << "YES\n";
        cout << n / 2 << "\n";

        for (int i = 0; i < (n / 2); i++) {
          cout << 2 << " ";
        }

        cout << "\n";
      } else {
      }
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

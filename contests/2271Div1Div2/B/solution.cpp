#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> cnt(n + 2, 0);

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    cnt[x]++;
  }

  bool aliceWin = false;
  for (int i = 0; i <= n + 1; i++) {
    if (cnt[i] < 2 * k) {
      if (cnt[i] == 2 * k - 1) {
        aliceWin = true;
      }
      break;
    }
  }

  if (aliceWin) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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

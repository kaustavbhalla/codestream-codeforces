#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  long long ans = 0;

  for (int i = n - 2; i >= 0; i--) {
    if (a[i + 1] == 0) {
      cout << "-1\n";
      return;
    }

    while (a[i + 1] <= a[i]) {
      a[i] = a[i] / 2;
      ans++;
    }
  }

  cout << ans << "\n";
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

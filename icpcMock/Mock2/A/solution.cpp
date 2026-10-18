#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  int ans = 0;
  for (int i = 0; i < n - 1; i++) {
    if (a[i] == a[i + 1]) {
      ans++;
      i++;
      continue;
    }

    if (a[i + 1] - 1 == a[i]) {
      ans++;
      i++;
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

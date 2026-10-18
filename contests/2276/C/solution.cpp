#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  vector<int> prefixSum(n + 1, 0);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    prefixSum[i + 1] = prefixSum[i] + a[i];
  }

  vector<int> allL(k, 0);

  int ans = 0;

  for (int r = k; r < n; r++) {
    allL[prefixSum[r - k] % k]++;
    ans += allL[prefixSum[r + 1] % k];
  }

  cout << ans << "\n";
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

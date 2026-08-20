#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, q;
  cin >> n >> q;

  vector<int> a(n);

  vector<int> pref(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    pref[i + 1] = pref[i] + a[i];
  }

  for (int i = 0; i < q; i++) {
    int l, r, k;
    cin >> l >> r >> k;

    int newSpaceSum = (r - l + 1) * k;
    int leftSum = pref[l - 1] + pref[n] - pref[r];

    if ((newSpaceSum + leftSum) % 2 == 0) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
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

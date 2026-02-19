#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, s, x;
  cin >> n >> s >> x;

  int summation = 0;
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    summation += a[i];
  }

  if ((s >= summation) && ((s - summation) % x == 0)) {
    cout << "YES" << "\n";
  } else {
    cout << "NO" << "\n";
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
}

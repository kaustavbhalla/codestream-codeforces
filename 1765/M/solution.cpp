#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
  int n;
  cin >> n;

  int p = n;

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      p = i;
      break;
    }
  }

  int a = n / p;
  int b = n - a;

  cout << a << " " << b << "\n";
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

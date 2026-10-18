#include <bits/stdc++.h>
using namespace std;
#define int long long

int F(int n, int m) {
  if (n <= 0) {
    return 0;
  }

  int cycles = n / m;
  int rem = n % m;

  int cycleSum = (m % 2 == 0) ? (m / 2) * (m - 1) : m * ((m - 1) / 2);
  int remSum = (rem % 2 == 0) ? (rem / 2) * (rem + 1) : rem * ((rem + 1) / 2);

  return cycles * cycleSum + remSum;
}

void solve() {
  int a, b, m;
  cin >> a >> b >> m;

  cout << F(b, m) - F(a, m) << "\n";
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

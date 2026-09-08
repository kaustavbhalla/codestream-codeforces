#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long x, y, k;
  cin >> x >> y >> k;

  long long d = y - x;
  long long limit = min(x + k - 1, d);

  long long total = 0;

  long long iter = 0;

  for (long long j = x; j <= limit; j++) {
    total += d % j;
  }

  iter = max(0LL, limit - x + 1);
  long long rem = k - iter;

  total += (rem * d);

  cout << total << "\n";
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

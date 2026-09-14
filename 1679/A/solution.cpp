#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n;
  cin >> n;

  if (n == 4 || n == 6) {
    cout << 1 << " " << 1 << "\n";
  } else if (n < 4 || n % 2 != 0) {
    cout << -1 << "\n";
  } else {
    cout << (n + 5) / 6 << " " << n / 4 << "\n";
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

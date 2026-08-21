#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void solve() {
  long long a, b, n;
  cin >> a >> b >> n;

  long long summation = 0;

  for (int i = 0; i < n; i++) {
    long long x;

    cin >> x;
    summation += (x >= a ? a - 1 : x);
  }

  cout << summation + b << "\n";
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

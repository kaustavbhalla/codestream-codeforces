#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, k;
  cin >> n >> k;

  if (n % 2 == 0) {
    cout << "YES\n";
  } else if (n == 1) {
    if (k == 1) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  } else {
    if (k % 2 == 0) {
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

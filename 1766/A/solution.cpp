#include <bits/stdc++.h>
using namespace std;

void solve() {
  string n;
  cin >> n;

  int length = n.length();
  int first_digit = n[0] - '0';

  int ans = (length - 1) * 9 + first_digit;

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
}

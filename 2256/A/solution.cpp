#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a == b && b == c && c == a) {
    cout << 0 << "\n";
  } else {
    int one = a + b;
    int two = b + c;
    int three = c + a;

    if (one >= c && two >= a && three >= b) {
      cout << max({a, b, c}) - min({a, b, c}) << "\n";
    } else {
      if (one < c)
        c = one;
      else if (two < a)
        a = two;
      else
        b = three;
      cout << max({a, b, c}) - min({a, b, c}) << "\n";
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

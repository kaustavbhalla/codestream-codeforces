#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c, d;

  cin >> a >> b >> c >> d;

  if (b > d) {
    cout << -1 << "\n";
  } else {
    int numOfMove1 = d - b;
    a += numOfMove1;

    if (a < c) {
      cout << -1 << "\n";
    } else {
      int numOfMove2 = a - c;
      cout << numOfMove2 + numOfMove1 << "\n";
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

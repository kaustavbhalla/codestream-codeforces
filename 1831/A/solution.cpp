#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;

    cout << (n + 1) - a << " ";
  }
  cout << "\n";
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

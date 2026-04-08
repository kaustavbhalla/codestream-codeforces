#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  cout << 1 << " ";

  for (int i = 0; i < n - 1; i++) {
    cout << (int)pow(2, i + 1) << " ";
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
}

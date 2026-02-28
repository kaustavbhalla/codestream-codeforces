#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int maxi = -1;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    if (x > maxi) {
      maxi = x;
    }
  }

  cout << maxi * n << "\n";
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

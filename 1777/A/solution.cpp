#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int count = 0;
  for (int i = 0; i < n - 1; i++) {
    if (a[i] % 2 == a[i + 1] % 2) {
      count++;
    }
  }

  cout << count << "\n";
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

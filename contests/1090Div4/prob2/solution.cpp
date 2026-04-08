#include <bits/stdc++.h>
using namespace std;

void solve() {
  vector<int> a(7);

  for (int i = 0; i < 7; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int sum = 0;

  for (int i = 0; i < 6; i++) {
    sum = sum + (-a[i]);
  }

  sum = sum + a[6];

  cout << sum << "\n";
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

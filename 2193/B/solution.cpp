#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int maximum = INT_MIN;

  for (auto x : arr) {
    maximum = max(maximum, x);
  }

  for (int i = 0; i < n / 2; i++) {
    if (arr[i] == maximum) {
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
}

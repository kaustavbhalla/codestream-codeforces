#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int maxDiff = arr[n - 1] - arr[0];

  for (int i = 0; i < n; i++) {
    maxDiff = max(maxDiff, arr[i] - arr[0]);
    maxDiff = max(maxDiff, arr[n - 1] - arr[i]);
    if (i < n - 1) {
      maxDiff = max(maxDiff, arr[i] - arr[i + 1]);
    }
  }

  cout << maxDiff << "\n";
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

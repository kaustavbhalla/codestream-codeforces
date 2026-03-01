#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int isSorted = 1;

  for (int i = 0; i < n - 1; i++) {
    if (a[i] <= a[i + 1]) {
      continue;
    } else {
      isSorted = 0;
      break;
    }
  }

  if (isSorted) {
    cout << "YES" << "\n";
  } else if (!isSorted) {
    if (min_element(a.begin(), a.end()) == a.begin()) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
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

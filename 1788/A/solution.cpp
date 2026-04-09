#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int totalCount = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] == 2) {
      totalCount++;
    }
  }

  if (totalCount % 2 != 0 && totalCount != 0) {
    cout << -1 << "\n";
  } else if (totalCount == 0) {
    cout << 1 << "\n";
  } else if (totalCount % 2 == 0) {
    int runningCounter = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] == 2) {
        runningCounter++;
      }

      if (totalCount / 2 == runningCounter) {
        cout << i + 1 << "\n";
        break;
      }
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

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int eveCount = 0;
  int oddCount = 0;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    if (x % 2 == 0) {
      eveCount++;
    } else {
      oddCount++;
    }
  }

  if (oddCount % 2 != 0) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
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

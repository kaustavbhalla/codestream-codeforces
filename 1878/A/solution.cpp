#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  int isExist = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    if (x == k) {
      isExist = 1;
    } else {
      continue;
    }
  }

  if (isExist) {
    cout << "YES" << "\n";
  } else {
    cout << "NO" << "\n";
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

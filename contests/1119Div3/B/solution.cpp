#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int oC = 0;
  int eN4 = 0;
  int eY4 = 0;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    if (x % 2 != 0) {
      oC++;
    } else {
      if (x % 4 == 0) {
        eY4++;
      } else {
        eN4++;
      }
    }
  }

  cout << max({oC, eN4, eY4}) << "\n";
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

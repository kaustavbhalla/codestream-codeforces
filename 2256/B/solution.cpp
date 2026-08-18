#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int validCount = 0;

  for (int startE = 0; startE <= 1; startE++) {
    for (int startO = 0; startO <= 1; startO++) {
      bool match = true;

      for (int i = 0; i < n; i++) {
        if (s[i] == '?') {
          continue;
        }

        int expected;

        if (i % 2 == 0) {
          if ((i / 2) % 2 == 0) {
            expected = startE;
          } else {
            expected = 1 - startE;
          }
        } else {
          if ((i / 2) % 2 == 0) {
            expected = startO;
          } else {
            expected = 1 - startO;
          }
        }

        if (s[i] - '0' != expected) {
          match = false;
          break;
        }
      }

      if (match) {
        validCount++;
      }
    }
  }

  cout << validCount << "\n";
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

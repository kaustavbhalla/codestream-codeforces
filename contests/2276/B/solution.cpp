#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;

  int xxx = 0;
  int xyx = 0;

  for (int i = 1; i < s.size() - 1; i++) {
    if (s[i - 1] == s[i] && s[i] == s[i + 1]) {
      xxx = 1;
    }

    if (s[i - 1] == s[i + 1] && s[i] != s[i + 1]) {
      xyx = 1;
    }
  }

  cout << 1 + xxx + xyx << "\n";
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

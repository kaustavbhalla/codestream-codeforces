#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  size_t pos = s.find("...");

  if (pos != string::npos) {
    cout << 2 << "\n";
  } else {
    int count = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '.') {
        count++;
      }
    }

    cout << count << "\n";
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

#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  string x;
  cin >> x;

  string s;
  cin >> s;

  int count = 0;

  while (x.length() < s.length()) {
    x += x;
    count++;
  }

  if (x.find(s) != string::npos) {
    cout << count << "\n";
    return;
  }

  x += x;
  count++;

  if (x.find(s) != string::npos) {
    cout << count << "\n";
  } else {
    cout << -1 << "\n";
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

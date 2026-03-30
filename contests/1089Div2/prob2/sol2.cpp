#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> p(n);

  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  vector<bool> chair(n, false);
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (chair[i] == false) {
      chair[p[i] - 1] = true;
      ++count;
    } else if (chair[i] == true) {
      break;
    }
  }

  cout << count << "\n";
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
